#include "header.h"

int tribonacci_recursive(int n) {
  if (n == 0 || n == 1) {
    return 0;
  } else if (n == 2) {
    return 1;
  } else {
    return tribonacci_recursive(n - 3) + tribonacci_recursive(n - 2) +
           tribonacci_recursive(n - 1);
  }
}

int tribonacci_iterative(int n) {
  if (n == 0 || n == 1) {
    return 0;
  } else if (n == 2) {
    return 1;
  }
  int n3 = 0;
  int n2 = 1;
  int n1 = 1;
  int trib = n3 + n2 + n1;
  for (int i = 3; i < n - 1; i++) {
    n3 = n2;
    n2 = n1;
    n1 = trib;
    trib = n3 + n2 + n1;
  }
  return trib;
}

int tribonacci_memoized(int n) {
  int max;
  if (n + 1 > 3) {
    max = n + 1;
  } else {
    max = 3;
  }
  std::vector<int> C(max, 2147483647);
  C[0] = 0;
  C[1] = 0;
  C[2] = 1;
  int trib = tribonacci_memoized_helper(n, C);
  return trib;
}

int tribonacci_memoized_helper(int n, std::vector<int> &C) {
  int result;
  if (C[n] != 2147483647) {
    return C[n];
  } else {
    result = tribonacci_memoized_helper(n-3, C) + tribonacci_memoized_helper(n-2, C) + tribonacci_memoized_helper(n-1, C);
  }
  C[n] = result;
  return result;
}

int tribonacci_dynamic(int n) {
  int max;
  if (n+1> 3) {
    max = n + 1;
  } else {
    max = 3;
  }
  std::vector<int> A(max, 2147483647);
  A[0] = 0;
  A[1] = 0;
  A[2] = 1;
  for (int i = 3; i < n + 1; i++) {
    A[i] = A[i - 3] + A[i - 2] + A[i - 1];
  }
  return A[n];
}