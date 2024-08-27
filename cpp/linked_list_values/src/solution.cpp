#include "solution.h"

vector<string> Solution::linked_list_values(Node *head) {
  Node *current = head;

  vector<string> result;

  while (current != nullptr) {
    result.emplace_back(current->val);
    current = current->next;
  }

  return result;
}
