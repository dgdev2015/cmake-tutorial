cmake_minimum_required(VERSION 3.10)

project(sqlite_static_library VERSION 1.0)

add_library(sqlite3
    STATIC
    src/sqlite3.c
)
target_include_directories(sqlite3
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)