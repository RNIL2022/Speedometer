cmake_minimum_required(VERSION 3.18)

project(Animation800x480App LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt6 COMPONENTS Gui Qml Quick)
find_package(Qt6 REQUIRED COMPONENTS SerialPort)

qt_add_executable(Animation800x480App src/main.cpp src/serial.h src/serial.cpp)

qt_add_resources(Animation800x480App "configuration"
    PREFIX "/"
    FILES
        qtquickcontrols2.conf
)
target_link_libraries(Animation800x480App PRIVATE Qt6::SerialPort)
target_link_libraries(Animation800x480App PRIVATE
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::Gui
    Qt${QT_VERSION_MAJOR}::Quick
    Qt${QT_VERSION_MAJOR}::Qml
)

include(${CMAKE_CURRENT_SOURCE_DIR}/qmlmodules)

install(TARGETS Animation800x480App
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
set(INSTALL_DESTDIR "/opt")
install(TARGETS Animation800x480App
    RUNTIME DESTINATION "${INSTALL_DESTDIR}"
    BUNDLE DESTINATION "${INSTALL_DESTDIR}"
    LIBRARY DESTINATION "${INSTALL_DESTDIR}"
)
