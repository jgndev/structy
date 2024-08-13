//
// Created by Jeremy Novak on 8/13/24.
//

#include "solution.h"

std::unordered_map<char, int> charCount(std::string s) {
    std::unordered_map<char, int> charCount;

    for (char c : s) {
        charCount[c]++;
    }

    return charCount;
}

bool Solution::anagram(std::string s1, std::string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }

    return charCount(s1) == charCount(s2);

}
