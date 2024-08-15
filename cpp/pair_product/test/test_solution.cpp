#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
    const std::vector<int> nums = {3, 2, 5, 4, 1};
    const int target = 8;
    const std::vector<int> expected = {1, 3};
    const std::vector<int> result = solution.pair_product(nums, target);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    const std::vector<int> nums = {3, 2, 5, 4, 1};
    const int target = 10;
    const std::vector<int> expected = {1, 2};
    const std::vector<int> result = solution.pair_product(nums, target);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
    const std::vector<int> nums = {4, 7, 9, 2, 5, 1};
    const int target = 5;
    const std::vector<int> expected = {4, 5};
    const std::vector<int> result = solution.pair_product(nums, target);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
    const std::vector<int> nums = {4, 7, 9, 2, 5, 1};
    const int target = 35;
    const std::vector<int> expected = {1, 4};
    const std::vector<int> result = solution.pair_product(nums, target);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
    const std::vector<int> nums = {3, 2, 5, 4, 1};
    const int target = 10;
    const std::vector<int> expected = {1, 2};
    const std::vector<int> result = solution.pair_product(nums, target);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseSix) {
    const std::vector<int> nums = {4, 6, 8, 2};
    const int target = 16;
    const std::vector<int> expected = {2, 3};
    const std::vector<int> result = solution.pair_product(nums, target);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseSeven) {
    std::vector<int> nums;
    for (int i = 0; i <= 21000; i += 1) {
        nums.push_back(i);
    }
    const int target = 440979000;
    const std::vector<int> expected = {20999, 21000};
    const std::vector<int> result = solution.pair_product(nums, target);
    EXPECT_EQ(result, expected);
}
