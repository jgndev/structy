#include "solution.h"

std::vector<int> Solution::intersection(std::vector<int> a, std::vector<int> b) {
    std::unordered_set<int> set;

    for (int e : a) {
        set.insert(e);
    }

    std::vector<int> result;

    for (int e : b) {
        if (set.find(e) != set.end()) {
            result.push_back(e);
        }
    }

    return result;
}