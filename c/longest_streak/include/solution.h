#ifndef SOLUTION_H
#define SOLUTION_H

#include <stddef.h>

struct Node {
  int val;
  struct Node *next;
};

int longest_streak(struct Node *head);

#endif // SOLUTION_H
