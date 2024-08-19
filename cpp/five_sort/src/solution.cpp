#include "solution.h"

std::vector<int> Solution::five_sort(std::vector<int>& numbers) {
    int left = 0;
    int right = static_cast<int>(numbers.size()) - 1;

    while (left < right) {
        if (numbers[left] == 5) {
            // walk the right pointer left while it is looking at a 5
            while (numbers[right] == 5) {
                right--;
            }

            // swap the values at the left and right pointers
            std::swap(numbers[left], numbers[right]);
            right--;
        }

        left++;
    }


    return numbers;
}