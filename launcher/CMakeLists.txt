cmake_minimum_required(VERSION 3.16)
project(Launcher)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets WebEngineWidgets)

# Находим все .cpp файлы
file(GLOB_RECURSE SOURCES
    "*.cpp"
    "*.h"
    "*.hpp"
)

# Создаём исполняемый файл
add_executable(Launcher ${SOURCES})

# Подключаем библиотеки Qt
target_link_libraries(Launcher
    Qt6::Core
    Qt6::Widgets
    Qt6::WebEngineWidgets
)

# Копируем папку resources рядом с .exe
add_custom_command(TARGET Launcher POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_CURRENT_SOURCE_DIR}/resources
        $<TARGET_FILE_DIR:Launcher>/resources)
