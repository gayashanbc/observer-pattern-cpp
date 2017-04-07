cmake_minimum_required(VERSION 3.6)
project(Observer_Pattern)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp Subject.hpp Observer.hpp WeatherData.hpp WeatherData.cpp Client.hpp Client.cpp)
add_executable(Observer_Pattern ${SOURCE_FILES})