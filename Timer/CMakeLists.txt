cmake_minimum_required(VERSION 3.16)

project(Timer VERSION 0.1 LANGUAGES CXX)

# Включение автоматической генерации UI, MOC и RCC файлов
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Настройка стандартов C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Поиск Qt
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

# Определение исходных файлов подпроекта
set(TIMER_SOURCES
    timer.cpp
    timer.h
    timer.ui
    ../Timer/Timer.qrc
)

# Создание статической библиотеки
add_library(Timer STATIC ${TIMER_SOURCES}
    timeron.h timeron.cpp timeron.ui)

# Связывание библиотеки с Qt
target_link_libraries(Timer PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

target_include_directories(Timer PUBLIC
    ${CMAKE_SOURCE_DIR}/TimeTracker/  # Путь к заголовочным файлам TimeTracker
)
