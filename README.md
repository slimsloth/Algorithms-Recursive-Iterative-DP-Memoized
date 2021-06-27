# CPSC-335-Project-4 Summer 2021
[Project Instructions](https://docs.google.com/document/d/1QpNbD17YYP7OwdI5QP2wJAS811rCa-xVNlpiyzAtb6c/edit)
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
- [ ] Complete Exercise 11-3 (a) from Algorithm Design in Three Acts.
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



