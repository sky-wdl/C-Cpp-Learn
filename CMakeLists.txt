cmake_minimum_required(VERSION 3.19)
project(C_Learn C)

set(CMAKE_C_STANDARD 17)
project(demo LANGUAGES C CXX) #CMake Error: Cannot determine link language for target 如果这里不添加C 的话会报这个错误

add_executable(demo C-Test/demo.c)
add_executable(demo-cpp C-Test/demo-cpp.cpp)
add_executable(cpp-Homework-1 cpp-Homework-1/cpp-Homework-1.cpp)
add_executable(cpp-Homework-2 cpp-Homework-2/cpp-Homework-2.cpp)
add_executable(cpp-Homework-3 cpp-Homework-3/cpp-Homework-3.cpp)
add_executable(cpp-Homework-3-2 cpp-Homework-3/cpp-Homework-3-2.cpp)
add_executable(cpp-Homework-3-3 cpp-Homework-3/cpp-Homework-3-3.cpp)
add_executable(cpp-Homework-4 cpp-Homework-4/cpp-Homework-4.cpp)
add_executable(cpp-Homework-5 cpp-Homework-5/cpp-Homework-5.cpp)
add_executable(cpp-Homework-6 cpp-Homework-6/cpp-Homework-6.cpp)
add_executable(cpp-Homework-7 cpp-Homework-7/cpp-Homework-7.cpp)
add_executable(cpp-Homework-8 cpp-Homework-8/cpp-Homework-8.cpp)
add_executable(cpp-HomeWork-9 cpp-Homework-9/cpp-HomeWork-9.cpp)
add_executable(cpp-Homework-10 cpp-Homework-10/cpp-Homework-10.cpp)
add_executable(cpp-Homework-11 cpp-Homework-11/cpp-Homework-11.cpp)
add_executable(cpp-Homework-12 cpp-Homework-12/cpp-Homework-12.cpp)
add_executable(cpp-Homework-13 cpp-Homework-13/cpp-Homework-13.cpp)
add_executable(cpp-Homework-13-2 cpp-Homework-13/cpp-Homework-13-2.cpp)
add_executable(cpp-qimozuoye cpp-qimozuoye/1.cpp)
add_executable(cpp-qimozuoye-2 cpp-qimozuoye/2.cpp)
add_executable(cpp-qimo cpp-qimozuoye/Main.cpp)

add_executable(OJ-2-1 C-Chap-2/OJ-2-1.c)
add_executable(OJ-2-2 C-Chap-2/OJ-2-2.c)
add_executable(OJ-2-3 C-Chap-2/OJ-2-3.c)
add_executable(OJ-2-4 C-Chap-2/OJ-2-4.c)
add_executable(OJ-2-5 C-Chap-2/OJ-2-5.c)
add_executable(OJ-2-6 C-Chap-2/OJ-2-6.c)
add_executable(OJ-2-7 C-Chap-2/OJ-2-7.c)
add_executable(OJ-2-8 C-Chap-2/OJ-2-8.c)
add_executable(OJ-2-9 C-Chap-2/OJ-2-9.c)
add_executable(OJ-2-10 C-Chap-2/OJ-2-10.c)
add_executable(OJ-2-11 C-Chap-2/OJ-2-11.c)
add_executable(OJ-2-12 C-Chap-2/OJ-2-12.c)
add_executable(OJ-3-1 C-Chap-3/OJ-3-1.c)
add_executable(OJ-3-2 C-Chap-3/OJ-3-2.c)
add_executable(OJ-3-3 C-Chap-3/OJ-3-3.c)
add_executable(OJ-3-4 C-Chap-3/OJ-3-4.c)
add_executable(OJ-3-5 C-Chap-3/OJ-3-5.c)
add_executable(OJ-3-6 C-Chap-3/OJ-3-6.c)
add_executable(OJ-3-7 C-Chap-3/OJ-3-7.c)
add_executable(OJ-3-8 C-Chap-3/OJ-3-8.c)
add_executable(OJ-3-9 C-Chap-3/OJ-3-9.c)
add_executable(OJ-3-10 C-Chap-3/OJ-3-10.c)
add_executable(OJ-4-1 C-Chap-4/OJ-4-1.c)
add_executable(OJ-4-2 C-Chap-4/OJ-4-2.c)
add_executable(OJ-4-3 C-Chap-4/OJ-4-3.c)
add_executable(OJ-4-4 C-Chap-4/OJ-4-4.c)
add_executable(OJ-4-5 C-Chap-4/OJ-4-5.c)
add_executable(OJ-4-6 C-Chap-4/OJ-4-6.c)
add_executable(OJ-4-7 C-Chap-4/OJ-4-7.c)
add_executable(OJ-4-8 C-Chap-4/OJ-4-8.c)
add_executable(OJ-4-9 C-Chap-4/OJ-4-9.c)
add_executable(OJ-4-10 C-Chap-4/OJ-4-10.c)
add_executable(OJ-5-1 C-Chap-5/OJ-5-1.c)
add_executable(OJ-5-2 C-Chap-5/OJ-5-2.c)
add_executable(OJ-5-3 C-Chap-5/OJ-5-3.c)
add_executable(OJ-5-4 C-Chap-5/OJ-5-4.c)
add_executable(OJ-5-5 C-Chap-5/OJ-5-5.c)
add_executable(OJ-5-6 C-Chap-5/OJ-5-6.c)
add_executable(OJ-5-7 C-Chap-5/OJ-5-7.c)
add_executable(OJ-6-1 C-Chap-6/OJ-6-1.c)
add_executable(OJ-6-2 C-Chap-6/OJ-6-2.c)
add_executable(OJ-6-3 C-Chap-6/OJ-6-3.c)
add_executable(OJ-6-4 C-Chap-6/OJ-6-4.c)
add_executable(OJ-6-5 C-Chap-6/OJ-6-5.c)
add_executable(OJ-6-6 C-Chap-6/OJ-6-6.c)
add_executable(OJ-6-7 C-Chap-6/OJ-6-7.c)
add_executable(OJ-6-8 C-Chap-6/OJ-6-8.c)
add_executable(OJ-7-1 C-Chap-7/OJ-7-1.c)
add_executable(OJ-7-2 C-Chap-7/OJ-7-2.c)
add_executable(OJ-7-3 C-Chap-7/OJ-7-3.c)
add_executable(OJ-7-4 C-Chap-7/OJ-7-4.c)
add_executable(OJ-7-5 C-Chap-7/OJ-7-5.c)
add_executable(OJ-7-6 C-Chap-7/OJ-7-6.c)
add_executable(OJ-7-7 C-Chap-7/OJ-7-7.c)
add_executable(OJ-7-8 C-Chap-7/OJ-7-8.c)
add_executable(OJ-7-9 C-Chap-7/OJ-7-9.c)
add_executable(OJ-7-10 C-Chap-7/OJ-7-10.c)
add_executable(OJ-8-1 C-Chap-8/OJ-8-1.c)
add_executable(OJ-8-2 C-Chap-8/OJ-8-2.c)
add_executable(OJ-8-3 C-Chap-8/OJ-8-3.c)
add_executable(OJ-8-4 C-Chap-8/OJ-8-4.c)
add_executable(OJ-8-5 C-Chap-8/OJ-8-5.c)
add_executable(OJ-8-6 C-Chap-8/OJ-8-6.c)
add_executable(OJ-8-7 C-Chap-8/OJ-8-7.c)
add_executable(OJ-8-8 C-Chap-8/OJ-8-8.c)
add_executable(OJ-8-9 C-Chap-8/OJ-8-9.c)
add_executable(OJ-8-10 C-Chap-8/OJ-8-10.c)
add_executable(OJ-9-11-1 C-Chap-9-11/OJ-9-11-1.c)
add_executable(OJ-9-11-8 C-Chap-9-11/OJ-9-11-8.c)
add_executable(OJ-9-11-2 C-Chap-9-11/OJ-9-11-2.c)
add_executable(OJ-9-11-3 C-Chap-9-11/OJ-9-11-3.c)
add_executable(OJ-9-11-4 C-Chap-9-11/OJ-9-11-4.c)
add_executable(OJ-9-11-5 C-Chap-9-11/OJ-9-11-5.c)
add_executable(OJ-9-11-6 C-Chap-9-11/OJ-9-11-6.c)

add_executable(structural "Big Homework/Main.c" "Big Homework/display.c" "Big Homework/search.c"
        "Big Homework/struct.h" "Big Homework/input.c" "Big Homework/sort.c" "Big Homework/setGrade.c"
        "Big Homework/reAchievement.c" "Big Homework/getAverAndFail.c")

add_executable(Midterm1-1 C-Mid-1/Midterm-1.c)
add_executable(Midterm1-2 C-Mid-1/Midterm-2.c)
add_executable(Midterm1-3 C-Mid-1/Midterm-3.c)
add_executable(Midterm1-4 C-Mid-1/Midterm-4.c)
add_executable(Midterm2-4 C-Mid-2/Midterm-4.c)
add_executable(Midterm2-3 C-Mid-2/Midterm-3.c)
add_executable(Midterm3-1 C-Mid-3/Midterm-1.c)
add_executable(Midterm3-2 C-Mid-3/Midterm-2.c)
add_executable(Midterm3-3 C-Mid-3/Midterm-3.c)
add_executable(Midterm3-4 C-Mid-3/Midterm-4.c)
add_executable(Midterm3-5 C-Mid-3/Midterm-5.c)
add_executable(Midterm4-1 C-Mid-4/Midterm-1.c)
add_executable(Midterm4-2 C-Mid-4/Midterm-2.c)
add_executable(Midterm4-3 C-Mid-4/Midterm-3.c)
add_executable(Midterm4-4 C-Mid-4/Midterm-4.c)
add_executable(Midterm5-1 C-Mid-5/Midterm-1.c)
add_executable(Midterm5-2 C-Mid-5/Midterm-2.c)
add_executable(Midterm5-3 C-Mid-5/Midterm-3.c)
add_executable(Midterm5-4 C-Mid-5/Midterm-4.c)
add_executable(Midterm5-5 C-Mid-5/Midterm-5.c)

