#include "solution.h"
#include "unity.h"
#include <stdlib.h>

void setUp(void) {
  // This function runs before each test
}

void tearDown(void) {
  // This function runs after each test
}

// helper function to create a linked list from an array
Node *create_list(const int arr[], const int size) {
  Node *dummy = malloc(sizeof(Node));
  dummy->val = 0;
  dummy->next = NULL;

  Node *current = dummy;

  for (int i = 0; i < size; i++) {
    current->next = malloc(sizeof(Node));
    current->next->val = arr[i];
    current->next->next = NULL;
    current = current->next;
  }

  Node *head = dummy->next;
  free(dummy);

  return head;
}

// helper function to compare two linked lists
void assert_lists_equal(const Node* expected, const Node *actual) {
  while (expected && actual) {
    TEST_ASSERT_EQUAL_INT(expected->val, actual->val);
    expected = expected->next;
    actual = actual->next;
  }

  TEST_ASSERT_NULL(expected);
  TEST_ASSERT_NULL(actual);
}

// helper function to free a linked list
void free_list(Node *head) {
  while (head) {
    Node *temp = head;
    head = head->next;
    free(temp);
  }
}

// BEGIN TEST IMPLEMENTATIONS

void test_case_one(void) {
  int arr1[] = {1, 2, 3}; // 321
  int arr2[] = {4, 5, 6}; // 654

  Node *l1 = create_list(arr1, 3);
  Node *l2 = create_list(arr2, 3);
  Node *result = add_lists(l1, l2);

  const int expected[] = {5, 7, 9};
  Node *expected_list = create_list(expected, 3);

  assert_lists_equal(expected_list, result);

  free_list(l1);
  free_list(l2);
  free_list(result);
  free_list(expected_list);
}

void test_case_two(void) {
  int arr1[] = {9, 9, 9}; // 999
  int arr2[] = {1}; // 1

  Node *l1 = create_list(arr1, 3);
  Node *l2 = create_list(arr2, 1);
  Node *result = add_lists(l1, l2);

  const int expected[] = {0, 0, 0, 1};
  Node* expected_list = create_list(expected, 4);

  assert_lists_equal(expected_list, result);

  free_list(l1);
  free_list(l2);
  free_list(result);
  free_list(expected_list);
}

void test_case_three(void) {
  int arr1[] = {0};
  int arr2[] = {0};

  Node *l1 = create_list(arr1, 1);
  Node *l2 = create_list(arr2, 1);
  Node *result = add_lists(l1, l2);

  const int expected[] = {0};
  Node *expected_list = create_list(expected, 1);

  assert_lists_equal(expected_list, result);

  free_list(l1);
  free_list(l2);
  free_list(result);
  free_list(expected_list);
}

void test_case_four(void) {
  int arr1[] = {1, 2, 3}; // 321

  Node *l1 = create_list(arr1, 3);
  Node *l2 = NULL;
  Node *result = add_lists(l1, l2);

  const int expected[] = {1, 2, 3}; // 321
  Node *expected_list = create_list(expected, 3);

  assert_lists_equal(expected_list, result);

  free_list(l1);
  free_list(result);
  free_list(expected_list);
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