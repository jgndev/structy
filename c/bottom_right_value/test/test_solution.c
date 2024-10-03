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
  Node *a = createNode("3");
  Node *b = createNode("11");
  Node *c = createNode("10");
  Node *d = createNode("4");
  Node *e  = createNode("-2");
  Node *f = createNode("1");

  a->left = b;
  a->right = c;
  b->left = d;
  b->right = e;
  c->right = f;

  const char *expected = "1";
  const char *result = bottomRightValue(a);

  TEST_ASSERT_EQUAL_STRING(result, expected);
}

void test_case_two(void) {
  Node *a = createNode("-1");
  Node *b = createNode("-6");
  Node *c = createNode("-5");
  Node *d = createNode("-3");
  Node *e = createNode("-4");
  Node *f = createNode("-13");
  Node *g = createNode("-2");
  Node *h = createNode("6");

  a->left = b;
  a->right = c;
  b->left = d;
  b->right = e;
  c->right = f;
  e->left = g;
  e->right = h;

  const char *expected = "6";
  const char *result = bottomRightValue(a);

  TEST_ASSERT_EQUAL_STRING(result, expected);
}

void test_case_three(void) {
  Node *a = createNode("-1");
  Node *b = createNode("-6");
  Node *c = createNode("-5");
  Node *d = createNode("-3");
  Node *e = createNode("-4");
  Node *f = createNode("-13");
  Node *g = createNode("-2");
  Node *h = createNode("6");
  Node *i = createNode("7");

  a->left = b;
  a->right = c;
  b->left = d;
  b->right = e;
  c->right = f;
  e->left = g;
  e->right = h;
  f->left = i;

  const char *expected = "7";
  const char *result = bottomRightValue(a);

  TEST_ASSERT_EQUAL_STRING(result, expected);
}

void test_case_four(void) {
  Node *a = createNode("a");
  Node *b = createNode("b");
  Node *c = createNode("c");
  Node *d = createNode("d");
  Node *e = createNode("e");
  Node *f = createNode("f");

  a->left = b;
  a->right = c;
  b->left = d;
  b->right = e;
  e->right = f;

  const char *expected = "f";
  const char *result = bottomRightValue(a);

  TEST_ASSERT_EQUAL_STRING(result, expected);
}

void test_case_five(void) {
  Node *a = createNode("42");

  const char *expected = "42";
  const char *result = bottomRightValue(a);

  TEST_ASSERT_EQUAL_STRING(result, expected);
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

// END TEST IMPLEMENTATIONS
