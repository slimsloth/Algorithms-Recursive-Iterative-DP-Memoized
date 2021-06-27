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
  std::cout << "| n |value \n";
  for (int i = 0; i < 25; i++) {
    std::cout << "| " << i + 1 << " | " << tribonacci_recursive(i) << "\n";
  }
  std::cout << "\nITERATIVE METHOD\n";
  std::cout << "| n |value \n";
  for (int i = 0; i < 25; i++) {
    std::cout << "| " << i + 1 << " | " << tribonacci_iterative(i) << "\n";
  }
  std::cout << "\nMEMOIZED METHOD\n";
  std::cout << "| n |value \n";
  for (int i = 0; i < 25; i++) {
    std::cout << "| " << i + 1 << " | " << tribonacci_memoized(i) << "\n";
  }
  std::cout << "\nDYANMIC METHOD\n";
  std::cout << "| n |value \n";
  for (int i = 0; i < 25; i++) {
    std::cout << "| " << i + 1 << " | " << tribonacci_dynamic(i) << "\n";
  }
  std::cout << "\n\nEnd of output\n\n";

  //*********CSV OUTPUT***************************************************
  std::ofstream outFile;
  outFile.open("./output/recursive.csv");
  outFile << "n,value\n";
  for (int i = 0; i < 25; i++) {
    outFile << i + 1 << "," << tribonacci_recursive(i) << "\n";
  }
  outFile.close();
  outFile.open("./output/iterative.csv");
  outFile << "n,value\n";
  for (int i = 0; i < 25; i++) {
    outFile << i + 1 << "," << tribonacci_iterative(i) << "\n";
  }
  outFile.close();
  outFile.open("./output/memoized.csv");
  outFile << "n,value\n";
  for (int i = 0; i < 25; i++) {
    outFile << i + 1 << "," << tribonacci_recursive(i) << "\n";
  }
  outFile.close();
  outFile.open("./output/dynamic.csv");
  outFile << "n,value\n";
  for (int i = 0; i < 25; i++) {
    outFile << i + 1 << "," << tribonacci_dynamic(i) << "\n";
  }
  outFile.close();
  //***END OF CSV OUTPUT***************************************************

  return 0;
}