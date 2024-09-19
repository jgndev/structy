#include "solution.h"
#include "unity.h"

void setUp(void) {
    // This function runs before each test
}

void tearDown(void) {
    // This function runs after each test
}

// Helper function to create a node
Node* create_node(const char* val) {
    Node* node = (Node*)malloc(sizeof(Node));
    strcpy(node->val, val);
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Helper function to free the tree
void free_tree(Node* root) {
    if (root == NULL) return;
    free_tree(root->left);
    free_tree(root->right);
    free(root);
}

// Helper function to compare results
void assert_bfs_result(Node* root, const char* expected[], int expectedSize) {
    int size;
    char** result = breadth_first_values(root, &size);

    TEST_ASSERT_EQUAL_INT(expectedSize, size);

    for (int i = 0; i < size; i++) {
        TEST_ASSERT_EQUAL_STRING(expected[i], result[i]);
        free(result[i]);
    }
    free(result);
}

// BEGIN TEST IMPLEMENTATIONS

void test_case_one(void) {
    int size;
    char** result = breadth_first_values(NULL, &size);
    TEST_ASSERT_EQUAL_INT(0, size);
    TEST_ASSERT_NULL(result);
}

void test_case_two(void) {
    Node* root = create_node("a");
    const char* expected[] = {"a"};
    assert_bfs_result(root, expected, 1);
    free_tree(root);
}

void test_case_three(void) {
    Node* root = create_node("a");
    root->left = create_node("b");
    root->right = create_node("c");
    root->left->left = create_node("d");
    root->left->right = create_node("e");

    const char* expected[] = {"a", "b", "c", "d", "e"};
    assert_bfs_result(root, expected, 5);
    free_tree(root);
}

void test_case_four(void) {
    Node* root = create_node("a");
    root->left = create_node("b");
    root->right = create_node("c");
    root->left->left = create_node("d");
    root->left->right = create_node("e");
    root->right->right = create_node("f");

    const char* expected[] = {"a", "b", "c", "d", "e", "f"};
    assert_bfs_result(root, expected, 6);
    free_tree(root);
}

void test_case_five(void) {
    Node* root = create_node("a");
    root->right = create_node("b");
    root->right->right = create_node("c");
    root->right->right->right = create_node("d");

    const char* expected[] = {"a", "b", "c", "d"};
    assert_bfs_result(root, expected, 4);
    free_tree(root);
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