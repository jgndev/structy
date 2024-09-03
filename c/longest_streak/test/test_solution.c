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
  struct Node a = {5, NULL};
  struct Node b = {5, NULL};
  struct Node c = {7, NULL};
  struct Node d = {7, NULL};
  struct Node e = {7, NULL};
  struct Node f = {6, NULL};

  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = &e;
  e.next = &f;

  const int expected = 3;
  const int result = longest_streak(&a);

  TEST_ASSERT_EQUAL(result, expected);
}

void test_case_two(void) {
  struct Node a = {3, NULL};
  struct Node b = {3, NULL};
  struct Node c = {3, NULL};
  struct Node d = {3, NULL};
  struct Node e = {9, NULL};
  struct Node f = {9, NULL};

  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = &e;
  e.next = &f;

  const int expected = 4;
  const int result = longest_streak(&a);

  TEST_ASSERT_EQUAL(result, expected);
}

void test_case_three(void) {
  struct Node a = {9, NULL};
  struct Node b = {9, NULL};
  struct Node c = {1, NULL};
  struct Node d = {9, NULL};
  struct Node e = {9, NULL};
  struct Node f = {9, NULL};

  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = &e;
  e.next = &f;

  const int expected = 3;
  const int result = longest_streak(&a);

  TEST_ASSERT_EQUAL(result, expected);
}

void test_case_four(void) {
  struct Node a = {5, NULL};
  struct Node b = {5, NULL};

  a.next = &b;

  const int expected = 2;
  const int result = longest_streak(&a);

  TEST_ASSERT_EQUAL(result, expected);
}

void test_case_five(void) {
  struct Node a = {4, NULL};

  const int expected = 1;
  const int result = longest_streak(&a);

  TEST_ASSERT_EQUAL(result, expected);
}

void test_case_six(void) {
  const int expected = 0;
  const int result = longest_streak(NULL);

  TEST_ASSERT_EQUAL(result, expected);
}

// END TEST IMPLEMENTATIONS

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_case_one);
  RUN_TEST(test_case_two);
  RUN_TEST(test_case_three);
  RUN_TEST(test_case_six);
  return UNITY_END();
}
