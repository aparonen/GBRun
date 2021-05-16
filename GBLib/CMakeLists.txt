add_library(GBLib
    CartridgeHeader.cpp
    CartridgeHeader.hpp
)

target_include_directories(GBLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
