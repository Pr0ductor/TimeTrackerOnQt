cmake_minimum_required(VERSION 3.16)

project(StopWatch VERSION 0.1 LANGUAGES CXX)

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
set(STOPWATCH_SOURCES
    stopwatch.cpp
    stopwatch.h
    stopwatch.ui
)

# Создание статической библиотеки
add_library(StopWatch STATIC ${STOPWATCH_SOURCES}


)

# Связывание библиотеки с Qt
target_link_libraries(StopWatch PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
