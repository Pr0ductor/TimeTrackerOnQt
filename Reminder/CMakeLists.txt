cmake_minimum_required(VERSION 3.16)

project(Reminder VERSION 0.1 LANGUAGES CXX)

# Включение автоматической генерации UI, MOC и RCC файлов
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Настройка стандартов C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Поиск Qt
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Multimedia)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Multimedia)

# Определение исходных файлов подпроекта
set(REMINDER_SOURCES
    reminder.cpp
    reminder.h
    reminder.ui
    ../Reminder/Reminder.qrc
)

# Создание статической библиотеки
add_library(Reminder STATIC ${REMINDER_SOURCES})

target_link_libraries(Reminder PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Multimedia
)

target_include_directories(Reminder PUBLIC
    ${CMAKE_SOURCE_DIR}/TimeTracker/  # Путь к заголовочным файлам TimeTracker
)

# Связывание библиотеки с Qt
target_link_libraries(Reminder PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
