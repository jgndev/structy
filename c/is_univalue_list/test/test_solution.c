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

  struct Node a = {7, NULL};
  struct Node b = {7, NULL};
  struct Node c = {7, NULL};

  a.next = &b;
  b.next = &c;

  bool result = is_univalue_list(&a);
  TEST_ASSERT_TRUE(result);
}

void test_case_two(void) {
  struct Node a = {7, NULL};
  struct Node b = {7, NULL};
  struct Node c = {4, NULL};

  a.next = &b;
  b.next = &c;

  bool result = is_univalue_list(&a);
  TEST_ASSERT_FALSE(result);
}

void test_case_three(void) {
  struct Node a = {2, NULL};
  struct Node b = {2, NULL};
  struct Node c = {2, NULL};
  struct Node d = {2, NULL};
  struct Node e = {2, NULL};
  struct Node f = {2, NULL};
  struct Node g = {2, NULL};

  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = &e;
  e.next = &f;
  f.next = &g;

  bool result = is_univalue_list(&a);
  TEST_ASSERT_TRUE(result);
}

void test_case_four(void) {
  struct Node a = {42, NULL};

  bool result = is_univalue_list(&a);
  TEST_ASSERT_TRUE(result);
}

// END TEST IMPLEMENTATIONS

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_case_one);
  RUN_TEST(test_case_two);
  RUN_TEST(test_case_three);
  RUN_TEST(test_case_four);
  return UNITY_END();
}
