cmake_minimum_required(VERSION 3.16)

project(TimeTracker VERSION 0.1 LANGUAGES CXX)

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

# Определение исходных файлов основного проекта
set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    resources.qrc
    messageboxhelper.h
    messageboxhelper.cpp
)

# Создание исполняемого файла
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(TimeTracker
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        StopWatchResources.qrc
        Kanban/Kanban.qrc
        Reminder/Reminder.qrc
        Timer/Timer.qrc
        messageboxhelper.h
        messageboxhelper.h
        messageboxhelper.h messageboxhelper.cpp

    )
else()
    if(ANDROID)
        add_library(TimeTracker SHARED ${PROJECT_SOURCES})
    else()
        add_executable(TimeTracker ${PROJECT_SOURCES})
    endif()
endif()

# Связывание с библиотекой Qt
target_link_libraries(TimeTracker PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Multimedia
)

# Добавление подпроектов
add_subdirectory(StopWatch)
add_subdirectory(Timer)
add_subdirectory(Kanban)
add_subdirectory(Reminder)

# Связывание библиотеки StopWatch и других библиотек с основным проектом
target_link_libraries(TimeTracker PRIVATE StopWatch)
target_link_libraries(TimeTracker PRIVATE Kanban)
target_link_libraries(TimeTracker PRIVATE Reminder)
target_link_libraries(TimeTracker PRIVATE Timer)

# Настройка свойств для macOS
if(APPLE)
    if(${QT_VERSION} VERSION_LESS 6.1.0)
        set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.TimeTracker)
    endif()
    set_target_properties(TimeTracker PROPERTIES
        ${BUNDLE_ID_OPTION}
        MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
        MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
        MACOSX_BUNDLE TRUE
    )
endif()

# Настройка свойств для Windows
if(WIN32)
    set_target_properties(TimeTracker PROPERTIES
        WIN32_EXECUTABLE TRUE
    )
endif()

# Установка целей
include(GNUInstallDirs)
install(TARGETS TimeTracker
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Финализация для Qt 6
if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(TimeTracker)
endif()

