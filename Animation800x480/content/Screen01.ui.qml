

/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/
import QtQuick 6.5
import QtQuick.Controls 6.5
//import BootUpAnim
import QtQuick.Timeline 1.0
import Qt5Compat.GraphicalEffects

//import QtQuick.Studio.Components 1.0
Rectangle {
    id: rectangle
    width: 800
    height: 480

    state: "BootAnimation"

    color: "#000000"
    scale: 1

    Item {
        id: groupItem
        x: -57
        y: 30
        width: 631
        height: 448

        Image {
            id: kubotaLogo
            x: 0
            y: 144
            width: 553
            height: 161
            source: "images/Kubota-Logo.png"
            fillMode: Image.PreserveAspectFit
        }

        //        DropShadow {
        //            id: dropShadow
        //            anchors.fill: kubotaLogo
        //            horizontalOffset: 3
        //            verticalOffset: 3
        //            radius: 4
        //            samples: 10
        //            color: "#ffffff"
        //            source: kubotaLogo
        //        }
        Rectangle {
            id: rectangle1
            x: 2
            y: 128
            width: 548
            height: 192
            color: rectangle.color
        }

        Image {
            id: escortsLogoremovebgpreview
            x: 344
            y: 0
            source: "images/EscortsLogo-removebg-preview.png"
            scale: 0.15
            transformOrigin: Item.Center
            fillMode: Image.PreserveAspectFit
        }
    }

    Timeline {
        id: timeline
        animations: [
            TimelineAnimation {
                id: timelineAnimation
                pingPong: false
                running: false
                duration: 4000
                loops: 1
                to: 3000
                from: 0
            }
        ]
        endFrame: 3000
        startFrame: 0
        enabled: false

        KeyframeGroup {
            target: escortsLogoremovebgpreview
            property: "scale"
            Keyframe {
                easing.bezierCurve: [0.455, 0.03, 0.515, 0.955, 1, 1]
                value: 0.35
                frame: 731
            }

            Keyframe {
                value: 0.15
                frame: 0
            }
        }

        KeyframeGroup {
            target: escortsLogoremovebgpreview
            property: "x"

            Keyframe {
                value: 0
                frame: 849
            }

            Keyframe {
                value: 200
                frame: 665
            }

            Keyframe {
                value: 200
                frame: 0
            }

            Keyframe {
                value: -0.04
                frame: 1075
            }
        }

        KeyframeGroup {
            target: rectangle1
            property: "width"
            Keyframe {
                value: 356
                frame: 820
            }

            Keyframe {
                value: 598
                frame: 600
            }
        }

        KeyframeGroup {
            target: rectangle1
            property: "height"
            Keyframe {
                value: 192
                frame: 820
            }

            Keyframe {
                value: 192
                frame: 600
            }
        }

        KeyframeGroup {
            target: rectangle1
            property: "x"
            Keyframe {
                value: -50
                frame: 820
            }

            Keyframe {
                value: 2
                frame: 600
            }

            Keyframe {
                value: 2
                frame: 551
            }

            Keyframe {
                frame: 1701
                value: -409
            }
        }

        KeyframeGroup {
            target: rectangle1
            property: "y"
            Keyframe {
                value: 128
                frame: 820
            }

            Keyframe {
                value: 128
                frame: 600
            }

            Keyframe {
                frame: 1701
                value: 101
            }
        }

        KeyframeGroup {
            target: kubotaLogo
            property: "x"
            Keyframe {
                value: 300
                frame: 850
            }

            Keyframe {
                easing.bezierCurve: [0.165, 0.84, 0.44, 1, 1, 1]
                value: 0
                frame: 581
            }
        }

        KeyframeGroup {
            target: rectangle
            property: "opacity"
            Keyframe {
                frame: 2803
                value: 0
            }

            Keyframe {
                frame: 2047
                value: 1
            }
        }
    }

    states: [
        State {
            name: "BootAnimation"

            PropertyChanges {
                target: timeline
                enabled: true
            }

            PropertyChanges {
                target: timelineAnimation
                running: true
            }

            PropertyChanges {
                target: groupItem
                x: -50
                y: -12
                width: 631
                height: 448
                scale: 0.76
            }

            PropertyChanges {
                target: escortsLogoremovebgpreview
                x: 344
                scale: 0.05
            }
        }
    ]
    transitions: [
        Transition {
            id: transition
            ParallelAnimation {
                SequentialAnimation {
                    PauseAnimation {
                        duration: 50
                    }

                    PropertyAnimation {
                        target: rectangle1
                        property: "y"
                        duration: 804
                    }
                }

                SequentialAnimation {
                    PauseAnimation {
                        duration: 50
                    }

                    PropertyAnimation {
                        target: rectangle1
                        property: "x"
                        duration: 804
                    }
                }

                SequentialAnimation {
                    PauseAnimation {
                        duration: 50
                    }

                    PropertyAnimation {
                        target: rectangle1
                        property: "width"
                        duration: 804
                    }
                }
            }

            ParallelAnimation {
                SequentialAnimation {
                    PauseAnimation {
                        duration: 50
                    }

                    PropertyAnimation {
                        target: escortsLogoremovebgpreview
                        property: "scale"
                        easing.bezierCurve: [0.455, 0.03, 0.515, 0.955, 1, 1]
                        duration: 805
                    }
                }

                SequentialAnimation {
                    PauseAnimation {
                        duration: 51
                    }

                    PropertyAnimation {
                        target: escortsLogoremovebgpreview
                        property: "x"
                        easing.bezierCurve: [0.455, 0.03, 0.515, 0.955, 1, 1]
                        duration: 804
                    }
                }

                SequentialAnimation {
                    PauseAnimation {
                        duration: 50
                    }

                    PropertyAnimation {
                        target: escortsLogoremovebgpreview
                        property: "y"
                        easing.bezierCurve: [0.455, 0.03, 0.515, 0.955, 1, 1]
                        duration: 805
                    }
                }
            }

            ParallelAnimation {
                SequentialAnimation {
                    PauseAnimation {
                        duration: 50
                    }

                    PropertyAnimation {
                        target: groupItem
                        property: "y"
                        easing.bezierCurve: [0.455, 0.03, 0.515, 0.955, 1, 1]
                        duration: 805
                    }
                }

                SequentialAnimation {
                    PauseAnimation {
                        duration: 50
                    }

                    PropertyAnimation {
                        target: groupItem
                        property: "x"
                        easing.bezierCurve: [0.455, 0.03, 0.515, 0.955, 1, 1]
                        duration: 805
                    }
                }

                SequentialAnimation {
                    PauseAnimation {
                        duration: 50
                    }

                    PropertyAnimation {
                        target: groupItem
                        property: "width"
                        duration: 805
                    }
                }

                SequentialAnimation {
                    PauseAnimation {
                        duration: 50
                    }

                    PropertyAnimation {
                        target: groupItem
                        property: "height"
                        duration: 805
                    }
                }
            }

            ParallelAnimation {
                SequentialAnimation {
                    PauseAnimation {
                        duration: 50
                    }

                    PropertyAnimation {
                        target: kubotaLogo
                        property: "y"
                        easing.bezierCurve: [0.455, 0.03, 0.515, 0.955, 1, 1]
                        duration: 804
                    }
                }

                SequentialAnimation {
                    PauseAnimation {
                        duration: 50
                    }

                    PropertyAnimation {
                        target: kubotaLogo
                        property: "x"
                        easing.bezierCurve: [0.455, 0.03, 0.515, 0.955, 1, 1]
                        duration: 804
                    }
                }

                SequentialAnimation {
                    PauseAnimation {
                        duration: 50
                    }

                    PropertyAnimation {
                        target: kubotaLogo
                        property: "width"
                        easing.bezierCurve: [0.455, 0.03, 0.515, 0.955, 1, 1]
                        duration: 804
                    }
                }

                SequentialAnimation {
                    PauseAnimation {
                        duration: 51
                    }

                    PropertyAnimation {
                        target: kubotaLogo
                        property: "height"
                        easing.bezierCurve: [0.455, 0.03, 0.515, 0.955, 1, 1]
                        duration: 803
                    }
                }
            }
            to: "*"
            from: "*"
        }
    ]
}
