#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

// TEST_F(SolutionTest, TestCaseOne) {
//     const int result = solution.function_name();
//     constexpr int expected = 0;
//     EXPECT_EQ(result, expected);
// }
//
// TEST_F(SolutionTest, TestCaseTwo) {
//     const int result = solution.function_name();
//     constexpr int expected = 0;
//     EXPECT_EQ(result, expected);
// }
//
// TEST_F(SolutionTest, TestCaseThree) {
//     const int result = solution.function_name();
//     constexpr int expected = 0;
//     EXPECT_EQ(result, expected);
// }
//

TEST_F(SolutionTest, TestCase) { solution.demo_linked_list(); }
