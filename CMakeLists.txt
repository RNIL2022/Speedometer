cmake_minimum_required(VERSION 3.16)

project(New_Screen VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.4 REQUIRED COMPONENTS Quick)
find_package(Qt6 REQUIRED COMPONENTS SerialPort)

qt_standard_project_setup()

qt_add_executable(appNew_Screen
    main.cpp serial.cpp serial.h
)

qt_add_qml_module(appNew_Screen
    URI New_Screen
    VERSION 1.0
    QML_FILES Main.qml InnerRing.qml RightElement.qml SpeedNeedle.qml SpeedoDigits.qml Speedometer.qml LeftElement.qml KWNeedle.qml LElementsModel.qml
    RESOURCES
        pics/arrow.png
        pics/arrow-down-solid.svg
        pics/arrow-left-solid.svg
        pics/arrow-right-solid.svg
        pics/arrow-up-solid.svg
        pics/Background.png
        pics/battery-full.webp
        pics/battery-full-solid.svg
        pics/bg.png
        pics/call.png
        pics/call-disconnected.jpeg
        pics/Efficiency.png
        pics/Empty.png
        pics/Energy.png
        pics/Lade-Balken.png
        pics/Media.png
        pics/Music.png
        pics/Navi.png
        pics/Numbers.png
        pics/Range.png
        pics/Street.png
        pics/Tacho.png
        pics/Tacho_Mitte.png
        pics/temp.png
        pics/Tile.png
        pics/Trips.png
        pics/wifi.png
)

set_target_properties(appNew_Screen PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)
target_link_libraries(appNew_Screen PRIVATE Qt6::SerialPort)
target_link_libraries(appNew_Screen
    PRIVATE Qt6::Quick
)

install(TARGETS appNew_Screen
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
#set(INSTALL_DESTDIR "/opt")
#install(TARGETS appNew_Screen
#    RUNTIME DESTINATION "${INSTALL_DESTDIR}"
#    BUNDLE DESTINATION "${INSTALL_DESTDIR}"
#    LIBRARY DESTINATION "${INSTALL_DESTDIR}"
#)
