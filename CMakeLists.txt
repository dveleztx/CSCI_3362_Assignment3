cmake_minimum_required(VERSION 3.12)
project(CSCI_3362_Assignment3 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(CSCI_3362_Assignment3
        CPU.c
        cpu.h
        driver.c
        list.c
        list.h
        schedulers.h
        task.h schedule_fcfs.c schedule_sjf.c schedule_rr.c schedule_priority.c schedule_priority_rr.c)
