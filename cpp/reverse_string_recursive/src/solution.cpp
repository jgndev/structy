#include "solution.h"

string Solution::reverse_string(string s) {
  if (s.length() == 0) {
    return "";
  }

  return reverse_string(s.substr(1)) + s[0];
}
