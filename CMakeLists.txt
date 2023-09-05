cmake_minimum_required(VERSION 3.26)
project(C_Studies C)

set(CMAKE_C_STANDARD 11)

add_executable(C_Studies main.c
        Data_Structure_Exercises/Exercise1_Recursividade_Slide2.c
        HackerRank_Exercises/Hello_World_In_C.c
        HackerRank_Exercises/Playing_With_Characters.c
        HackerRank_Exercises/Sum_And_Difference_Of_Two_Numbers.c
        "HackerRank_Exercises/Functions_In_C .c"
        "HackerRank_Exercises/Pointers_In_C .c")
