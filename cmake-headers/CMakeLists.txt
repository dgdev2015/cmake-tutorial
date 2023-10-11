cmake_minimum_required(VERSION 3.10)

project(cmake_headers)

add_executable(${PROJECT_NAME}
    src/main.c
    src/table.c
)

target_include_directories(${PROJECT_NAME}
    PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)