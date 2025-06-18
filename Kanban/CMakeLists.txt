cmake_minimum_required(VERSION 3.16)

project(Kanban VERSION 0.1 LANGUAGES CXX)

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
set(KANBAN_SOURCES
    kanban.cpp
    kanban.h
    kanban.ui
    taskcard.cpp
    taskcard.h
    ../Kanban/Kanban.qrc
)

# Создание статической библиотеки
add_library(Kanban STATIC ${KANBAN_SOURCES}
    taskcard.h
    taskcard.cpp)

# Связывание библиотеки с Qt
target_link_libraries(Kanban PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
