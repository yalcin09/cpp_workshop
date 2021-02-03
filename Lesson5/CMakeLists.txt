cmake_minimum_required(VERSION 3.19.3)

project(Lesson5)

# Kütüphane dosyaları eklnedi
include_directories(include)

# Kaynak dosyaların eklenmesi
# Tek tek yükleme
#set(SOURCES src/main.cpp src/lib_name.cpp)
# Grup olarak yükleme
file(GLOB SOURCES "src/*.cpp")

add_executable(main ${SOURCES})