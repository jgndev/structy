/*
 *
 * function countdown(n):
 *   if n == 0:
 *       return
 *
 *   print(n)
 *
 *   countdown(n - 1)
 *
 */

#include <iostream>

void countdown(int n) {
  // base case
  if (n == 0) {
    return;
  }

  std::cout << n << std::endl;

  // recursive step
  countdown(n - 1);
}

int main() {
  std::cout << "recursive countdown from 10" << std::endl;
  countdown(10);

  std::cout << "recursive countdown from 9" << std::endl;
  countdown(9);

  return 0;
}
