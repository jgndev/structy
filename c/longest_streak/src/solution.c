#include "solution.h"

int longest_streak(struct Node *head) {
  struct Node *curr = head;
  struct Node *prev = NULL;

  int curr_streak = 0;
  int longest_streak = 0;

  while (curr) {
    if (prev == NULL || curr->val == prev->val) {
      curr_streak++;
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

