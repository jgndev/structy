#include "solution.h"
#include "unity.h"

void setUp(void) {
  // This function runs before each test
}

void tearDown(void) {
  // This function runs after each test
}

// BEGIN TEST IMPLEMENTATIONS

void test_case_one(void) {
  Node *root = createNode("a");
  root->left = createNode("b");
  root->right = createNode("c");
  root->left->left = createNode("d");
  root->left->right = createNode("e");

  TEST_ASSERT_TRUE(treeIncludes(root, "c"));
  TEST_ASSERT_TRUE(treeIncludes(root, "e"));
  TEST_ASSERT_TRUE(treeIncludes(root, "a"));

  TEST_ASSERT_FALSE(treeIncludes(root, "q"));
  TEST_ASSERT_FALSE(treeIncludes(root, "z"));
  TEST_ASSERT_FALSE(treeIncludes(root, "r"));

  freeTree(root);
}

void test_case_two(void) {
  Node *root = createNode("f");
  root->left = createNode("b");
  root->right = createNode("g");
  root->left->left = createNode("a");
  root->left->right = createNode("c");

  TEST_ASSERT_TRUE(treeIncludes(root, "a"));
  TEST_ASSERT_TRUE(treeIncludes(root, "g"));
  TEST_ASSERT_FALSE(treeIncludes(root, "d"));
  TEST_ASSERT_FALSE(treeIncludes(root, "e"));

  freeTree(root);
}

void test_case_three(void) {
  Node *root = createNode("d");
  root->left = createNode("b");
  root->right = createNode("f");
  root->left->left = createNode("a");
  root->right->right = createNode("g");

  TEST_ASSERT_TRUE(treeIncludes(root, "b"));
  TEST_ASSERT_TRUE(treeIncludes(root, "g"));
  TEST_ASSERT_FALSE(treeIncludes(root, "c"));
  TEST_ASSERT_FALSE(treeIncludes(root, "e"));

  freeTree(root);
}

void test_case_four(void) {
  Node *root = createNode("c");
  root->left = createNode("a");
  root->right = createNode("e");
  root->left->right = createNode("b");
  root->right->left = createNode("d");

  TEST_ASSERT_TRUE(treeIncludes(root, "b"));
  TEST_ASSERT_TRUE(treeIncludes(root, "e"));
  TEST_ASSERT_FALSE(treeIncludes(root, "f"));
  TEST_ASSERT_FALSE(treeIncludes(root, "g"));

  freeTree(root);
}

void test_case_five(void) {
  Node *root = createNode("g");
  root->left = createNode("c");
  root->right = createNode("e");
  root->left->left = createNode("a");
  root->right->left = createNode("d");

  TEST_ASSERT_TRUE(treeIncludes(root, "a"));
  TEST_ASSERT_TRUE(treeIncludes(root, "e"));
  TEST_ASSERT_FALSE(treeIncludes(root, "b"));
  TEST_ASSERT_FALSE(treeIncludes(root, "f"));

  freeTree(root);
}

// END TEST IMPLEMENTATIONS

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_case_one);
  RUN_TEST(test_case_two);
  RUN_TEST(test_case_three);
  RUN_TEST(test_case_four);
  RUN_TEST(test_case_five);
  return UNITY_END();
}
