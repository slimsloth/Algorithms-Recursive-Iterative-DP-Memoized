#include "header.h"

int main() {
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
    std::cout << tribonacci_memoized(3) << ", ";
  }
  std::cout << "\nDYANMIC METHOD\n";
  for (int i = 0; i < 10; i++) {
    std::cout << tribonacci_dynamic(i) << ", ";
  }
  return 0;
}