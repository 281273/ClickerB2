cmake_minimum_required(VERSION 3.27)
project(ClickerB)

set(CMAKE_CXX_STANDARD 17)

add_executable(ClickerB main.cpp
        Controller.cpp
        Controller.h
        Model.cpp
        Model.h
        View.cpp
        View.h)
