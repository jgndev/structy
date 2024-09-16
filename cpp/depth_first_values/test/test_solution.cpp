#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  // Arrange
  Node a("a");
  Node b("b");
  Node c("c");
  Node d("d");
  Node e("e");
  Node f("f");

  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  c.right = &f;

  Solution solution;

  // Act
  std::vector<std::string> result = solution.depth_first_values(&a);

  // Assert
  std::vector<std::string> expected = {"a", "b", "d", "e", "c", "f"};
  ASSERT_EQ(result, expected);
}

TEST(DepthFirstValuesTest, EmptyTree) {
  // Arrange
  Solution solution;

  // Act
  std::vector<std::string> result = solution.depth_first_values(nullptr);

  // Assert
  ASSERT_TRUE(result.empty());
}

TEST(DepthFirstValuesTest, SingleNodeTree) {
  // Arrange
  Node root("root");
  Solution solution;

  // Act
  std::vector<std::string> result = solution.depth_first_values(&root);

  // Assert
  std::vector<std::string> expected = {"root"};
  ASSERT_EQ(result, expected);
}