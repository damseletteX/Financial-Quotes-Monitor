cmake_minimum_required(VERSION 3.16)
project(QuoteMonitor LANGUAGES C CXX)      # C is needed to compile sqlite3.c

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(sqlite3 STATIC third_party/sql/sqlite3.c)
target_include_directories(sqlite3 PUBLIC third_party/sqlite)

add_executable(monitor src/main.cpp)
target_link_libraries(quote_monitor PRIVATE sqlite3)
target_precompile_headers(quote_monitor PRIVATE
    <string> <vector> <iostream> <sqlite3.h>)