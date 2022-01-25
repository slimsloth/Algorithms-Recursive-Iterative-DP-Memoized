# Algorithms_iterative_recursive_memoized_DP
### Group Members: Sean Mitchell, Jason Mora-Mendoza

### How to run on Ubuntu:
~$ make

~$ make run
### Summary
This project implements the tribonacci algorithm in 4 different design patterns:
iteratively (naively), recursively, memoized recursion, and through dynamic programming.
Each design pattern takes n as an input and outputs the nth element of the tribonacci sequence.
Output will be displayed both in the console and a csv file in the output directory.
### Project Requirements
#### 1. Mathematical Analysis
- [x] Complete Exercise 11-3 (a) from Algorithm Design in Three Acts.
- [x] Pseudocode for exercise 11-3(a)
#### 2. Implementation in C++
Implement four programs in C++17. Each program should implement a solution to the tribonacci number problem using one of the following:
- [x] 1. The Naive Pattern.
- [x] 2. A recursive solution directly implementing the recurrence relation defining the nth tribonacci number.
- [x] 3. A recursive solution using memoization.
- [x] 4. The Dynamic Programming Pattern, using the algorithm you developed in Part (1).
- [x] Each program should create a table of the first 25 tribonacci numbers.

## Relevant Files:
header.h - the main header file for the project

functions.cpp - contains the tribonacci function implementations

main.cpp - the main test driver code that outputs the tribonacci sequences

pseudocode.py - the inital "pseudocode" for each algorithm, implemented and tested in python3.

./output/ - the directory that contains the csv outputs for each algorithm

makefile - the makefile for the project.

OUTPUT:

RECURSIVE METHOD
| n |value
| 1 | 0
| 2 | 0
| 3 | 1
| 4 | 1
| 5 | 2
| 6 | 4
| 7 | 7
| 8 | 13
| 9 | 24
| 10 | 44
| 11 | 81
| 12 | 149
| 13 | 274
| 14 | 504
| 15 | 927
| 16 | 1705
| 17 | 3136
| 18 | 5768
| 19 | 10609
| 20 | 19513
| 21 | 35890
| 22 | 66012
| 23 | 121415
| 24 | 223317
| 25 | 410744

ITERATIVE METHOD
| n |value
| 1 | 0
| 2 | 0
| 3 | 1
| 4 | 2
| 5 | 2
| 6 | 4
| 7 | 7
| 8 | 13
| 9 | 24
| 10 | 44
| 11 | 81
| 12 | 149
| 13 | 274
| 14 | 504
| 15 | 927
| 16 | 1705
| 17 | 3136
| 18 | 5768
| 19 | 10609
| 20 | 19513
| 21 | 35890
| 22 | 66012
| 23 | 121415
| 24 | 223317
| 25 | 410744

MEMOIZED METHOD
| n |value
| 1 | 0
| 2 | 0
| 3 | 1
| 4 | 1
| 5 | 2
| 6 | 4
| 7 | 7
| 8 | 13
| 9 | 24
| 10 | 44
| 11 | 81
| 12 | 149
| 13 | 274
| 14 | 504
| 15 | 927
| 16 | 1705
| 17 | 3136
| 18 | 5768
| 19 | 10609
| 20 | 19513
| 21 | 35890
| 22 | 66012
| 23 | 121415
| 24 | 223317
| 25 | 410744

DYANMIC METHOD
| n |value
| 1 | 0
| 2 | 0
| 3 | 1
| 4 | 1
| 5 | 2
| 6 | 4
| 7 | 7
| 8 | 13
| 9 | 24
| 10 | 44
| 11 | 81
| 12 | 149
| 13 | 274
| 14 | 504
| 15 | 927
| 16 | 1705
| 17 | 3136
| 18 | 5768
| 19 | 10609
| 20 | 19513
| 21 | 35890
| 22 | 66012
| 23 | 121415
| 24 | 223317
| 25 | 410744



