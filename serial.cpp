#include "serial.h"
#include <QSerialPort>
#include <QTime>

ReceiverThread::ReceiverThread(QObject *parent) :
    QThread(parent)
    , m_sdata("null")
    , m_name("null")
    , m_temp("null")
{
    const QMutexLocker locker(&m_mutex);
    m_portName = "ttyACM0";
    m_waitTimeout = 0;
    //    m_response = response;
    //! [3]
    if (!isRunning())
        start();
}
//
int ReceiverThread::sdata()
{
//    qDebug()<<"sdata:"<<m_sdata;
    bool ok;
    return m_sdata.toInt(&ok);
}
int ReceiverThread::name(){
    bool ok;
    return m_name.toInt(&ok);
}
QString ReceiverThread::temp(){
    return m_temp;
}
//
//! [0]
ReceiverThread::~ReceiverThread()
{
    m_mutex.lock();
    m_quit = true;
    m_mutex.unlock();
    wait();
}
//! [0]

//! [1] //! [2]
void ReceiverThread::startReceiver(int waitTimeout)
{
    //! [1]
//    const QMutexLocker locker(&m_mutex);
//    m_portName = "ttyACM0";
//    m_waitTimeout = waitTimeout;
////    m_response = response;
//    //! [3]
//    if (!isRunning())
//        start();
}
//! [2] //! [3]

//! [4]
void ReceiverThread::run()
{
    bool currentPortNameChanged = false;

    m_mutex.lock();
    //! [4] //! [5]
    QString currentPortName;
    if (currentPortName != m_portName) {
        currentPortName = m_portName;
        currentPortNameChanged = true;
    }

    int currentWaitTimeout = m_waitTimeout;
//    QString currentRespone = m_response;
    m_mutex.unlock();
    //! [5] //! [6]
    QSerialPort serial;

    while (!m_quit) {
        //![6] //! [7]
        if (currentPortNameChanged) {
            serial.close();
            serial.setPortName(currentPortName);

            if (!serial.open(QIODevice::ReadWrite)) {
                emit error(tr("Can't open %1, error code %2")
                               .arg(m_portName).arg(serial.error()));
                return;
            }
        }

        if (serial.waitForReadyRead(currentWaitTimeout)) {
            //! [7] //! [8]
            // read request
            QByteArray requestData = serial.readAll();
            while (serial.waitForReadyRead(10))
                requestData += serial.readAll();
            //! [8] //! [10]
            // write response
            qDebug()<<QString( requestData ).remove("\r").remove("\n") << "\n";
            QString line=QString(requestData);
            line.remove(QChar('\r'));
            line.remove(QChar('\n'));
            m_sdata=line;
            m_name=line;
            qDebug()<<"mname"<<m_name;
            if(m_sdata[0]=='s'){
                m_sdata="";
                m_name="";
                m_temp="";
                int i,j,k;
                for(i=1;line[i]!='r';i++){
                    m_sdata+=line[i];
                }
                for(j=i+1;line[j]!='t';j++){
                    m_name+=line[j];
                }
                for(k=j+1;k<line.length();k++){
                    m_temp+=line[k];
                }
            }
            qDebug()<<"line"<<line;
            qDebug()<<"name"<<m_name << "sdata" << m_sdata << "temp"<<m_temp;
            emit sdataChanged();
            emit nameChanged();
            emit tempChanged();
//            qDebug()<<requestData;
//            const QByteArray responseData = currentRespone.toUtf8();
//            serial.write(responseData);
            if (serial.waitForBytesWritten(m_waitTimeout)) {
                const QString request = QString::fromUtf8(requestData);
                //! [12]
                emit this->request(request);
                //! [10] //! [11] //! [12]
            } else {
                emit timeout(tr("Wait write response timeout %1")
                                 .arg(QTime::currentTime().toString()));
            }
            //! [9] //! [11]
        } else {
            emit timeout(tr("Wait read request timeout %1")
                             .arg(QTime::currentTime().toString()));
        }
        //! [9]  //! [13]
        //!
        m_mutex.lock();
        if (currentPortName != m_portName) {
            currentPortName = m_portName;
            currentPortNameChanged = true;
        } else {
            currentPortNameChanged = false;
        }
        currentWaitTimeout = m_waitTimeout;
//        currentRespone = m_response;
        m_mutex.unlock();
    }
    //! [13]
}


void ReceiverThread::setSdata()
{


}
void ReceiverThread::setName(){

}
void ReceiverThread::setTemp(){

}
