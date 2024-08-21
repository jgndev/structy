//
// Created by Jeremy Novak on 8/14/24.
//

#include "solution.h"

using std::string;
using std::vector;

int Solution::sum_of_lengths(vector<string> strings) {
  // base case
  if (strings.size() == 0) {
    return 0;
  }

  // recursive case
  auto next_pass =
      sum_of_lengths(vector<string>(strings.begin() + 1, strings.end()));

  return strings[0].length() + next_pass;
}
