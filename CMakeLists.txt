cmake_minimum_required(VERSION 3.5)
project(ItemList)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c classes/core/ItemList/ItemList.c classes/core/ItemList/ItemList.h classes/core/ItemList/Item.c classes/core/ItemList/Item.h)
add_executable(ItemList ${SOURCE_FILES})