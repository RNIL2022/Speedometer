import QtQuick 2.4
import Qt5Compat.GraphicalEffects
import Serial 1.0

Rectangle {
    color: "transparent"

    property int seconds
    property int tenseconds
    property int minutes



    Serial{
        id: serial
    }

    function speedvalue() {
                      var value1= (serial.sdata)*42.0169/100
                      return value1

                  }


    Text {
            scale: 2
            y:320
            x:-50
            font.family: "Eurostile"; color: "white"; font.pixelSize: 9
            text: serial.temp +"C"


        }
              SpeedNeedle {
                  id: speedoNeedle
                  value: speedvalue()
                       anchors.verticalCenterOffset: 0
                       anchors.centerIn: parent

                       focus: true
                       }

              KWNeedle {
                  id: kWNeedle
                  anchors.verticalCenterOffset: 0
                  anchors.centerIn: parent
                  value: serial.name
              }


              InnerRing    {
                id: innerring
                speed: (Math.round(speedoNeedle.currentValue, 0) + 360) * 0.68
              }

 }



