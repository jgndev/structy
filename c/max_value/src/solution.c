#include "solution.h"
#include <limits.h>

int max_value(const int nums[], const int length) {
  if (length <= 0) {
    return 0;
  }

  int max = INT_MIN;

  for (int i = 0; i < length; i++) {
    if (nums[i] > max) {
      max = nums[i];
    }
  }

  return max;
}

