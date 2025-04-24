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
  const int nums[] = {4, 7, 2, 8, 10, 9};
  const int nums_length = 6;
  const int expected = 10;
  const int result = max_value(nums, nums_length);
  TEST_ASSERT_EQUAL_INT(result, expected);
}

void test_case_two(void) {
  const int nums[] = {10, 5, 40, 42};
  const int nums_length = 4;
  const int expected = 42;
  const int result = max_value(nums, nums_length);
  TEST_ASSERT_EQUAL_INT(result, expected);
}

void test_case_three(void) {
  const int nums[] = {-5, -2, -1, -11};
  const int nums_length = 4;
  const int expected = -1;
  const int result = max_value(nums, nums_length);
  TEST_ASSERT_EQUAL_INT(result, expected);
}

void test_case_four(void) {
  const int nums[] = {42};
  const int nums_length = 1;
  const int expected = 42;
  const int result = max_value(nums, nums_length);
  TEST_ASSERT_EQUAL_INT(result, expected);
}

void test_case_five(void) {
  const int nums[] = {1000, 8};
  const int nums_length = 2;
  const int expected = 1000;
  const int result = max_value(nums, nums_length);
  TEST_ASSERT_EQUAL_INT(result, expected);
}

void test_case_six(void) {
  const int nums[] = {1000, 8, 9000};
  const int nums_length = 3;
  const int expected = 9000;
  const int result = max_value(nums, nums_length);
  TEST_ASSERT_EQUAL_INT(result, expected);
}

void test_case_seven(void) {
  const int nums[] = {2, 5, 1, 1, 4};
  const int nums_length = 5;
  const int expected = 5;
  const int result = max_value(nums, nums_length);
  TEST_ASSERT_EQUAL_INT(result, expected);
}

// END TEST IMPLEMENTATIONS

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_case_one);
  RUN_TEST(test_case_two);
  RUN_TEST(test_case_three);
  RUN_TEST(test_case_four);
  RUN_TEST(test_case_five);
  RUN_TEST(test_case_six);
  RUN_TEST(test_case_seven);
  return UNITY_END();
}
