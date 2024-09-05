#include <stdlib.h>

#include "solution.h"
#include "unity.h"

void setUp(void) {
  // This function runs before each test
}

void tearDown(void) {
  // This function runs after each test
}

void free_list(Node *head) {
  Node *curr = head;

  while (curr != NULL) {
    Node *temp = curr;
    curr = curr->next;
    free(temp->val);
    free(temp);
  }
}

// BEGIN TEST IMPLEMENTATIONS

void test_case_one(void) {
  char *values[] = {};
  const Node *head = create_linked_list(values, 0);
  TEST_ASSERT_NULL(head);
}

void test_case_two(void) {
  char *values[] = {"Hello"};
  Node *head = create_linked_list(values, 1);
  TEST_ASSERT_NOT_NULL(head);
  TEST_ASSERT_EQUAL_STRING("Hello", head->val);
  TEST_ASSERT_NULL(head->next);

  free_list(head);
}

void test_case_three(void) {
  char *values[] = {"Hello", "World", "Test"};
  Node *head = create_linked_list(values, 3);
  TEST_ASSERT_NOT_NULL(head);
  TEST_ASSERT_EQUAL_STRING("Hello", head->val);
  TEST_ASSERT_NOT_NULL(head->next);
  TEST_ASSERT_EQUAL_STRING("World", head->next->val);
  TEST_ASSERT_NOT_NULL(head->next->next);
  TEST_ASSERT_EQUAL_STRING("Test", head->next->next->val);
  TEST_ASSERT_NULL(head->next->next->next);

  free_list(head);
}

void test_case_four(void) {
  const Node *head = create_linked_list(NULL, 5);
  TEST_ASSERT_NULL(head);
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
