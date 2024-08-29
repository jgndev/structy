#include "solution.h"

bool Solution::linked_list_find(Node *head, std::string target) {
  auto current = head;

  while (current != nullptr) {
    if (current->val == target) {
      return true;
    }

    current = current->next;
  }

  return false;
}
