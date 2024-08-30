#include <gtest/gtest.h>
#include "solution.h" // Include your Node and Solution class definitions

class SolutionTest : public ::testing::Test {
protected:
    // Helper function to create a linked list from a vector of strings
    Node *createList(const std::vector<std::string> &values) {
        if (values.empty()) return nullptr;
        std::string first = values[0];
        Node *head = new Node(first);
        Node *current = head;
        for (size_t i = 1; i < values.size(); ++i) {
            std::string value = values[i];
            current->next = new Node(value);
            current = current->next;
        }
        return head;
    }

    // Helper function to convert a linked list to a vector of strings
    std::vector<std::string> listToVector(Node *head) {
        std::vector<std::string> result;
        while (head) {
            result.push_back(head->val);
            head = head->next;
        }
        return result;
    }

    // Helper function to delete a linked list
    void deleteList(Node *head) {
        while (head) {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Helper function to deep copy a list
    Node *copyList(Node *head) {
        if (!head) return nullptr;
        Node *newHead = new Node(head->val);
        Node *current = newHead;
        head = head->next;
        while (head) {
            current->next = new Node(head->val);
            current = current->next;
            head = head->next;
        }
        return newHead;
    }

    void runZipperTest(const std::vector<std::string> &list1Values,
                       const std::vector<std::string> &list2Values,
                       const std::vector<std::string> &expectedValues) {
        Node *list1 = createList(list1Values);
        Node *list2 = createList(list2Values);

        // Create copies for the zipper_lists function to use
        Node *list1Copy = copyList(list1);
        Node *list2Copy = copyList(list2);

        Solution solution;
        Node *result = solution.zipper_lists(list1Copy, list2Copy);

        EXPECT_EQ(listToVector(result), expectedValues);

        // Clean up all allocated memory
        deleteList(list1);
        deleteList(list2);
        deleteList(result);
    }
};

TEST_F(SolutionTest, EqualLengthLists) {
    runZipperTest({"a", "b", "c"}, {"x", "y", "z"}, {"a", "x", "b", "y", "c", "z"});
}

TEST_F(SolutionTest, FirstListLonger) {
    runZipperTest({"a", "b", "c", "d"}, {"x", "y"}, {"a", "x", "b", "y", "c", "d"});
}

TEST_F(SolutionTest, SecondListLonger) {
    runZipperTest({"a", "b"}, {"x", "y", "z", "w"}, {"a", "x", "b", "y", "z", "w"});
}

TEST_F(SolutionTest, OneEmptyList) {
    runZipperTest({"a", "b", "c"}, {}, {"a", "b", "c"});
}

TEST_F(SolutionTest, BothEmptyLists) {
    runZipperTest({}, {}, {});
}
