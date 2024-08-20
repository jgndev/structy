#include "solution.h"

int Solution::sum_numbers_recursive(std::vector<int> numbers) {
  // base case
  if (numbers.size() == 0) {
    return 0;
  }

  // recursive case
  return numbers[0] + sum_numbers_recursive(
                          std::vector<int>(numbers.begin() + 1, numbers.end()));
}
