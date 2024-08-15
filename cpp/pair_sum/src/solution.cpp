#include "solution.h"

#include <unordered_map>

std::vector<int> Solution::pair_sum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> complement_map;
    int n = static_cast<int>(nums.size());

    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];

        if (complement_map.find(complement) != complement_map.end()) {
            return {complement_map[complement], i};
        }

        complement_map[nums[i]] = i;
    }

    return {-1, -1};
}
