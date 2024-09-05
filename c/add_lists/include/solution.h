#ifndef SOLUTION_H
#define SOLUTION_H

#include <stdlib.h>
#include <stddef.h>

typedef struct Node {
  int val;
  struct Node *next;
} Node;

Node *add_lists(const Node *head1, const Node *head2);


#endif // SOLUTION_H
