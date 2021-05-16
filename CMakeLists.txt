cmake_minimum_required(VERSION 3.8)

project(GBRun
    VERSION 0.1
    DESCRIPTION "Hobby emulator of Nintendo Game Boy"
    LANGUAGES CXX
)

add_subdirectory(GBLib)
add_subdirectory(GBRun)
