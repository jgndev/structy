#include "solution.h"

int Solution::longest_streak(Node *head) {
  auto curr = head;
  Node *prev = nullptr;

  int curr_streak = 0;
  int longest_streak = 0;

  while (curr) {
    if (prev == nullptr || curr->val == prev->val) {
      ++curr_streak;
    } else {
      curr_streak = 1;
    }

    if (curr_streak > longest_streak) {
      longest_streak = curr_streak;
    }

    prev = curr;
    curr = curr->next;
  }

  return longest_streak;
}
