#include "solution.h"

bool Solution::is_prime(int n) {
  if (n < 2) {
    return false;
  }

  int sqn = static_cast<int>(sqrt(n));

  for (int i = 2; i <= sqn; ++i) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}
