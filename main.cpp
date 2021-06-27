#include "header.h"

int main() {
  /*******************************************************************
   * CPSC 335 Project 4 Test Driver Code                             *
   *******************************************************************
   * Group Members: Sean Mitchell, Jason Mora-Mendoza.               *
   * This project implements the tribonacci algorithm through 4      *
   * different methods: recursively, iteratively, memoized, and      *
   * dynamically.                                                    *
   *******************************************************************/
  std::cout << "\nRECURSIVE METHOD\n";
  for (int i = 0; i < 10; i++) {
    std::cout << tribonacci_recursive(i) << ", ";
  }
  std::cout << "\nITERATIVE METHOD\n";
  for (int i = 0; i < 10; i++) {
    std::cout << tribonacci_iterative(i) << ", ";
  }
  std::cout << "\nMEMOIZED METHOD\n";
  for (int i = 0; i < 10; i++) {
    std::cout << tribonacci_memoized(i) << ", ";
  }
  std::cout << "\nDYANMIC METHOD\n";
  for (int i = 0; i < 10; i++) {
    std::cout << tribonacci_dynamic(i) << ", ";
  }
  std::cout << "\n\nEnd of output\n\n";
  return 0;
}