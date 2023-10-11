cmake_minimum_required(VERSION 3.10)

project(sqlite_demo VERSION 1.0)

add_library(sqlite3
    STATIC
    src/sqlite3.c
)
target_include_directories(sqlite3
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

add_executable(create
    src/create.c
)
target_include_directories(create
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)
target_link_libraries(create PRIVATE sqlite3)

add_executable(insert
    src/insert.c
)
target_include_directories(insert
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)
target_link_libraries(insert PRIVATE sqlite3)

add_executable(select
    src/select.c
)
target_include_directories(select
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)
target_link_libraries(select PRIVATE sqlite3)

add_executable(test
    src/test.c
)
target_include_directories(test
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)
target_link_libraries(test PRIVATE sqlite3)
