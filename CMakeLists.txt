cmake_minimum_required(VERSION 3.12)
project(CSCI_3362_Assignment3 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(CSCI_3362_Assignment3
        make clean
        make fcfs
        ./fcfs book.txt)
