import QtQuick
import QtQuick.Window
import QtQuick.VirtualKeyboard
import Serial 1.0
import QtQuick.Controls 2.12
import QtQuick.Dialogs
import QtQuick.Layouts 1.1

Window {
    width: 800
       height: 480
       visible: true
       color: "black"
       title: qsTr("Potentiometer")

       Image {
          width: parent.width
          height: parent.height
          source: "pics/Background.png"
       }

       LeftElement {
           y: 10
           width: parent.width / 2
           height: 450
       }


       //Tacho
       Image {
          height: parent.height
          width: height
          x: (parent.width / 2) - (width / 2)
          y:0
          scale: 1.14
          source: "./pics/Tacho.png"
          fillMode: Image.PreserveAspectFit
       }

       Speedometer {
       height: 525
       width: height
       x: (parent.width / 2) - (width / 2)
       y: (parent.height / 2) - (height / 2)
       }

//    Serial{
//        id:serial
//    }

    InputPanel {
        id: inputPanel
        z: 99
        x: 0
        y: window.height
        width: window.width

        states: State {
            name: "visible"
            when: inputPanel.active
            PropertyChanges {
                target: inputPanel
                y: window.height - inputPanel.height
            }
        }
        transitions: Transition {
            from: ""
            to: "visible"
            reversible: true
            ParallelAnimation {
                NumberAnimation {
                    properties: "y"
                    duration: 250
                    easing.type: Easing.InOutQuad
                }
            }
        }
    }
}
