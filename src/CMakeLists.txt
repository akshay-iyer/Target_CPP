cmake_minimum_required(VERSION 3.3)
project(src)

IF(NOT CMAKE_BUILD_TYPE)
    SET(CMAKE_BUILD_TYPE Debug)
ENDIF()

set (CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(OpenCV REQUIRED)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -O3 -march=native ")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O3 -march=native -std=c++17 -Wno-reorder")

include_directories(
        ${PROJECT_SOURCE_DIR}/include
)

add_executable(op main.cpp singleElementSortedArray.cpp largestRowTreeRow.cpp)
target_link_libraries(op
        ${OpenCV_LIBS}
        stdc++fs)