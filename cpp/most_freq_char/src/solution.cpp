#include "solution.h"

#include <unordered_map>

char Solution::most_freq_char(std::string &s) {
    std::unordered_map<char, int> count;

    for (int i = 0; i < s.length(); ++i) {
        count[s[i]]++;
    }

    char best = '\0';

    for (int i = 0; i < s.length(); ++i) {
        char current = s[i];
        if (best == '\0' || count[current] > count[best]) {
            best = current;
        }
    }

    return best;
}
