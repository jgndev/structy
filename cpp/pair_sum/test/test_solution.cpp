#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
    std::vector<int> numbers = {3, 2, 5, 4, 1};
    const int target = 8;
    const std::vector<int> expected = {0, 2};
    const std::vector<int> result = solution.pair_sum(numbers, target);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    std::vector<int> numbers = {4, 7, 9, 2, 5, 1};
    const int target = 5;
    const std::vector<int> expected = {0, 5};
    const std::vector<int> result = solution.pair_sum(numbers, target);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
    std::vector<int> numbers = {4, 7, 9, 2, 5, 1};
    const int target = 3;
    const std::vector<int> expected = {3, 5};
    const std::vector<int> result = solution.pair_sum(numbers, target);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
    std::vector<int> numbers = {1, 6, 7, 2};
    const int target = 13;
    const std::vector<int> expected = {1, 2};
    const std::vector<int> result = solution.pair_sum(numbers, target);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
    std::vector<int> numbers = {9, 9};
    const int target = 18;
    const std::vector<int> expected = {0, 1};
    const std::vector<int> result = solution.pair_sum(numbers, target);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseSix) {
    std::vector<int> numbers = {6, 4, 2, 8};
    const int target = 12;
    const std::vector<int> expected = {1, 3};
    const std::vector<int> result = solution.pair_sum(numbers, target);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseSeven) {
    std::vector<int> numbers;
    for (int i = 0; i <= 21000; i++) {
        numbers.push_back(i);
    }
    const int target = 41999;
    const std::vector<int> expected = {20999, 21000};
    const std::vector<int> result = solution.pair_sum(numbers, target);
    EXPECT_EQ(result, expected);

}
