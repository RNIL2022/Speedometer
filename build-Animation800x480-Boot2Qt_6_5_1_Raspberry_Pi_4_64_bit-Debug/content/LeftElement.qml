import QtQuick 2.0
import Qt5Compat.GraphicalEffects

Rectangle {
    id: container
    width: parent.width
    height: parent.height
    color: "transparent"




    Image {
            id: temp
            anchors.verticalCenter: parent.verticalCenter
            x: 50
            y: 0
            source: "pics/temp.png"
            height: 100
            width: 100
            scale:1
        }



}

