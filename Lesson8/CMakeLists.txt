cmake_minimum_required(VERSION 3.19.3)

project(Lesson8)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(main ${SOURCES})