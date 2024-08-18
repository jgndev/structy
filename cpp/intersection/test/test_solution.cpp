#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;

    // Helper function to check if two vectors have the same elements regardless of order
    void ExpectSameElements(const std::vector<int>& actual, const std::vector<int>& expected) {
        std::unordered_set<int> actualSet(actual.begin(), actual.end());
        std::unordered_set<int> expectedSet(expected.begin(), expected.end());
        EXPECT_EQ(actualSet, expectedSet);
    }
};

TEST_F(SolutionTest, TestCaseOne) {
    const std::vector<int> a = {4, 2, 1, 6};
    const std::vector<int> b = {3, 6, 9, 2, 10};
    const std::vector<int> expected = {2, 6};
    const std::vector<int> result = solution.intersection(a, b);
    ExpectSameElements(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    const std::vector<int> a = {2, 4, 6};
    const std::vector<int> b = {4, 2};
    const std::vector<int> expected = {4, 2};
    const std::vector<int> result = solution.intersection(a, b);
    ExpectSameElements(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
    const std::vector<int> a = {4, 2, 1};
    const std::vector<int> b = {1, 2, 4, 6};
    const std::vector<int> expected = {1, 2, 4};
    const std::vector<int> result = solution.intersection(a, b);
    ExpectSameElements(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
    const std::vector<int> a = {0, 1, 2};
    const std::vector<int> b = {10, 11};
    const std::vector<int> expected = {};
    const std::vector<int> result = solution.intersection(a, b);
    ExpectSameElements(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
    const std::vector<int> a = {3, 5, 7, 9, 11};
    const std::vector<int> b = {1, 2, 5, 7, 23, 41};
    const std::vector<int> expected = {5, 7};
    const std::vector<int> result = solution.intersection(a, b);
    ExpectSameElements(result, expected);
}
