#include "solution.h"

std::string Solution::compress(std::string& s) {
    // get the length of s as a const int instead
    // of calling .length() each iteration
    const int n = static_cast<int>(s.length());

    // two pointer approach
    int left = 0, right = 0;

    // std::string for storing the resulting string
    std::string result;

    // the final character on a c++ string is '\0', we will
    // use this to advance right one place beyond the alpha
    // characters to get the correct count at the end of s.
    while (right <= n) {
       if (s[left] == s[right]) {
           // same character, continue looking
           right++;
       } else {
           const int count = right - left;
           if (count == 1) {
               result += s[left];
           } else {
               result += std::to_string(count) + s[left];
           }

           // advance left up to right;
           left = right;
       }
    }



    return result;
}
