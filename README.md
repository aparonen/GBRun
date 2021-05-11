# GBRun

GBRun is a hobby emulator of Nintendo Game Boy. The goal of the project is to
learn about basic system design and emulation concepts and modern C++
practices. The motivation is to be able to play some classic Game Boy games.
High emulation accuracy and/or performance is not necessarily desired.


## Installation

GBRun has the following build requirements:

* C++17 compiler
* CMake 3.14 or greater

The project can be built with the following commands:

    $ cmake -S <project_root> -B <project_root>/build
    $ cmake --build <project_root>/build

The built executable `GBRun` can be found in `<project_root>/build/GBRun/`.
