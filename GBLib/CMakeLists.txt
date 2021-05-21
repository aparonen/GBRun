add_library(GBLib
    CartridgeHeader.cpp
    CartridgeHeader.hpp
    CartridgeROM.cpp
    CartridgeROM.hpp
    CartridgeType.cpp
    CartridgeType.hpp
)

target_include_directories(GBLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
