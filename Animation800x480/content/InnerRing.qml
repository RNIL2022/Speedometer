import QtQuick 2.0
import Qt5Compat.GraphicalEffects
Item {

    property int speed: 0

    height: 260
    width: height
    x: (parent.width / 2) - (width / 2)
    y: (parent.height / 2) - (height / 2)

    Image {
         id: innerRingRect
         height: parent.height
         width: parent.width
         source: "pics/Tacho_Mitte.png"

         Text {
             id: speeddigit
             text: speed
             font.pixelSize: 100
             font.bold: true
             font.family: "Eurostile"
             y: 40
             color: "white"
             anchors.horizontalCenter: parent.horizontalCenter
         }

         DropShadow {
                 anchors.fill: speeddigit
                 horizontalOffset: 0
                 verticalOffset: 8
                 radius: 4.0
                 samples: 16
                 color: "black"
                 source: speeddigit
             }

         Text {
             text: "kmph"
             font.pixelSize: 40
             font.bold: true
             font.family: "Eurostile"
             y: 150
             color: "white"
             anchors.horizontalCenter: parent.horizontalCenter
         }

    }
}
