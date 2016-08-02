cmake_minimum_required(VERSION 3.5)
project(ItemList)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c ItemList.c ItemList.h Item.c Item.h)
add_executable(ItemList ${SOURCE_FILES})