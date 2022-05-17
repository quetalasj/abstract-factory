cmake_minimum_required(VERSION 3.21)
project(factory_method)

set(CMAKE_CXX_STANDARD 23)

include_directories(include)

add_executable(factory_method main.cpp ./src/ingredients.cpp ./src/pizza.cpp ./src/pizza_store.cpp)
