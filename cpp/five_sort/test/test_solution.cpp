#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
    std::vector<int> numbers = {12, 5, 1, 5, 12, 7};
    std::vector<int> expected = {12, 7, 1, 12, 5, 5};
    std::vector<int> result = solution.five_sort(numbers);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    std::vector<int> numbers = {5, 2, 5, 6, 5, 1, 10, 2, 5, 5};
    std::vector<int> expected = {2, 2, 10, 6, 1, 5, 5, 5, 5, 5};
    std::vector<int> result = solution.five_sort(numbers);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
    std::vector<int> numbers = {5, 5, 5, 1, 1, 1, 4};
    std::vector<int> expected = {4, 1, 1, 1, 5, 5, 5};
    std::vector<int> result = solution.five_sort(numbers);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
    std::vector<int> numbers = {5, 1, 2, 5, 5, 3, 2, 5, 1, 5, 5, 5, 4, 5};
    std::vector<int> expected = {4, 1, 2, 1, 2, 3, 5, 5, 5, 5, 5, 5, 5, 5};
    std::vector<int> result = solution.five_sort(numbers);
    EXPECT_EQ(result, expected);
}
