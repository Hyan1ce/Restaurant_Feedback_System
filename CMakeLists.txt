cmake_minimum_required(VERSION 3.28)
project(Restaurant_Feedback_System)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Restaurant_Feedback_System
        src/Admin.cpp
        src/Admin.h
        src/user.h
        src/user.h
        src/user.cpp
        src/dish.h
        src/dish.cpp
        src/main.cpp)
