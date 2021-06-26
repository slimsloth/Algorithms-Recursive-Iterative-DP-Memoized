#include <vector>
#include <iostream>

int tribonacci_recursive(int n);
int tribonacci_iterative(int n);
int tribonacci_memoized(int n);
int tribonacci_memoized_helper(int n, std::vector<int> C);
int tribonacci_dynamic(int n);