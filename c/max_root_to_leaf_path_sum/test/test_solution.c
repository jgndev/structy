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
  Node *a = newNode(3);
  Node *b = newNode(11);
  Node *c = newNode(4);
  Node *d = newNode(4);
  Node *e = newNode(-2);
  Node *f = newNode(1);

  TEST_ASSERT_NOT_NULL(a);
  TEST_ASSERT_NOT_NULL(b);
  TEST_ASSERT_NOT_NULL(c);
  TEST_ASSERT_NOT_NULL(e);
  TEST_ASSERT_NOT_NULL(e);
  TEST_ASSERT_NOT_NULL(f);

  a->left = b;
  a->right = c;
  b->left = d;
  b->right = e;
  c->right = f;

  const int result = maxPathSum(a);
  const int expected = 18;

  TEST_ASSERT_EQUAL_INT(result, expected);

  free(d);
  free(e);
  free(f);
  free(b);
  free(c);
  free(a);
}

void test_case_two(void) {
  Node *a = newNode(5);
  Node *b = newNode(11);
  Node *c = newNode(54);
  Node *d = newNode(20);
  Node *e = newNode(15);
  Node *f = newNode(1);
  Node *g = newNode(3);

  TEST_ASSERT_NOT_NULL(a);
  TEST_ASSERT_NOT_NULL(b);
  TEST_ASSERT_NOT_NULL(c);
  TEST_ASSERT_NOT_NULL(d);
  TEST_ASSERT_NOT_NULL(e);
  TEST_ASSERT_NOT_NULL(f);
  TEST_ASSERT_NOT_NULL(g);

  a->left = b;
  a->right = c;
  b->left = d;
  b->right = e;
  e->left = f;
  e->right = g;

  const int result = maxPathSum(a);
  const int expected = 59;

  TEST_ASSERT_EQUAL_INT(result, expected);

  free(g);
  free(f);
  free(e);
  free(d);
  free(c);
  free(b);
  free(a);
}

void test_case_three(void) {
  Node *a = newNode(42);

  TEST_ASSERT_NOT_NULL(a);

  const int result = maxPathSum(a);
  const int expected = 42;

  TEST_ASSERT_EQUAL_INT(result, expected);

  free(a);
}

// END TEST IMPLEMENTATIONS

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_case_one);
  RUN_TEST(test_case_two);
  RUN_TEST(test_case_three);
  return UNITY_END();
}
