#include "solution.h"

std::string Solution::uncompress(std::string& s) {
    // two pointer approach, left and right
    int left = 0;
    const int n = static_cast<int>(s.length());
    std::string result;

    for (int right = 0; right < n; right++) {
        if (std::isalpha(s[right])) {
            // We've found a letter, process the number-letter pair
            const int count = std::stoi(s.substr(left, right - left));
            result.append(count, s[right]);

            // Move left to the start of the next pair
            left = right + 1;
        }
    }

    return result;
}
