#ifndef SERIAL_H
#define SERIAL_H

#include <QMutex>
#include <QThread>
#include <QWaitCondition>
#include <QObject>
//! [0]
class ReceiverThread : public QThread
{
    Q_OBJECT

public:
    Q_PROPERTY(int sdata READ sdata WRITE setSdata NOTIFY sdataChanged)
    Q_PROPERTY(int name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QString temp READ temp WRITE setTemp NOTIFY tempChanged)
    explicit ReceiverThread(QObject *parent = nullptr);
    ~ReceiverThread();

    void startReceiver(int waitTimeout);

    int sdata();
    int name();
    QString temp();

signals:
    void request(const QString &s);
    void error(const QString &s);
    void timeout(const QString &s);

    void sdataChanged();
    void nameChanged();
    void tempChanged();

public slots:

    void setSdata();
    void setName();
    void setTemp();

private:
    void run() override;

    QString m_portName;
    QString m_response;
    int m_waitTimeout = 0;
    QMutex m_mutex;
    bool m_quit = false;
    QString m_sdata;
    QString m_name;
    QString m_temp;
};
//! [0]



#endif // SERIAL_H
