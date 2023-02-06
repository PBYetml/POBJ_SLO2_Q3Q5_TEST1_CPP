cmake_minimum_required(VERSION 3.23)
project(question5)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(question5
        main.cpp
        User.h
        Signal.h
        SignalGenerator.h)
