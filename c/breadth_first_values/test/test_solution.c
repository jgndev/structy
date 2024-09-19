#include "solution.h"
#include "unity.h"

void setUp(void) {
    // This function runs before each test
}

void tearDown(void) {
    // This function runs after each test
}

// Helper function to create a node
Node* createNode(const char* val) {
    Node* node = (Node*)malloc(sizeof(Node));
    strcpy(node->val, val);
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Helper function to free the tree
void freeTree(Node* root) {
    if (root == NULL) return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

// Helper function to compare results
void assertBfsResult(Node* root, const char* expected[], int expectedSize) {
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
    Node* root = createNode("a");
    const char* expected[] = {"a"};
    assertBfsResult(root, expected, 1);
    freeTree(root);
}

void test_case_three(void) {
    Node* root = createNode("a");
    root->left = createNode("b");
    root->right = createNode("c");
    root->left->left = createNode("d");
    root->left->right = createNode("e");

    const char* expected[] = {"a", "b", "c", "d", "e"};
    assertBfsResult(root, expected, 5);
    freeTree(root);
}

void test_case_four(void) {
    Node* root = createNode("a");
    root->left = createNode("b");
    root->right = createNode("c");
    root->left->left = createNode("d");
    root->left->right = createNode("e");
    root->right->right = createNode("f");

    const char* expected[] = {"a", "b", "c", "d", "e", "f"};
    assertBfsResult(root, expected, 6);
    freeTree(root);
}

void test_case_five(void) {
    Node* root = createNode("a");
    root->right = createNode("b");
    root->right->right = createNode("c");
    root->right->right->right = createNode("d");

    const char* expected[] = {"a", "b", "c", "d"};
    assertBfsResult(root, expected, 4);
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