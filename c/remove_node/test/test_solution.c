#include "solution.h"
#include "unity.h"
#include <string.h>

void setUp(void) {}
void tearDown(void) {}

// Helper function to create a node with a dynamically allocated string
Node *create_test_node(const char *value) {
  char *new_val = strdup(value); // Dynamically allocate memory for the string
  return new_node(new_val);
}

void test_remove_middle_node(void) {
  Node *a = create_test_node("a");
  Node *b = create_test_node("b");
  Node *c = create_test_node("c");
  Node *d = create_test_node("d");
  Node *e = create_test_node("e");
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = e;

  Node *result = remove_node(a, "c");

  TEST_ASSERT_EQUAL_STRING("a", result->val);
  TEST_ASSERT_EQUAL_STRING("b", result->next->val);
  TEST_ASSERT_EQUAL_STRING("d", result->next->next->val);
  TEST_ASSERT_EQUAL_STRING("e", result->next->next->next->val);
  TEST_ASSERT_NULL(result->next->next->next->next);

  free_list(result);
}

void test_remove_first_node(void) {
  Node *a = create_test_node("a");
  Node *b = create_test_node("b");
  Node *c = create_test_node("c");
  a->next = b;
  b->next = c;

  Node *result = remove_node(a, "a");

  TEST_ASSERT_EQUAL_STRING("b", result->val);
  TEST_ASSERT_EQUAL_STRING("c", result->next->val);
  TEST_ASSERT_NULL(result->next->next);

  free_list(result);
}

void test_remove_last_node(void) {
  Node *a = create_test_node("a");
  Node *b = create_test_node("b");
  Node *c = create_test_node("c");
  a->next = b;
  b->next = c;

  Node *result = remove_node(a, "c");

  TEST_ASSERT_EQUAL_STRING("a", result->val);
  TEST_ASSERT_EQUAL_STRING("b", result->next->val);
  TEST_ASSERT_NULL(result->next->next);

  free_list(result);
}

void test_remove_node_not_in_list(void) {
  Node *a = create_test_node("a");
  Node *b = create_test_node("b");
  Node *c = create_test_node("c");
  a->next = b;
  b->next = c;

  Node *result = remove_node(a, "d");

  TEST_ASSERT_EQUAL_STRING("a", result->val);
  TEST_ASSERT_EQUAL_STRING("b", result->next->val);
  TEST_ASSERT_EQUAL_STRING("c", result->next->next->val);
  TEST_ASSERT_NULL(result->next->next->next);

  free_list(result);
}

void test_remove_from_single_node_list(void) {
  Node *a = create_test_node("a");

  Node *result = remove_node(a, "a");

  TEST_ASSERT_NULL(result);
  // No need to call free_list here as the node has already been freed
}

void test_remove_from_empty_list(void) {
  Node *result = remove_node(NULL, "a");

  TEST_ASSERT_NULL(result);
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_remove_middle_node);
  RUN_TEST(test_remove_first_node);
  RUN_TEST(test_remove_last_node);
  RUN_TEST(test_remove_node_not_in_list);
  RUN_TEST(test_remove_from_single_node_list);
  RUN_TEST(test_remove_from_empty_list);
  return UNITY_END();
}
