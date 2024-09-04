#ifndef SOLUTION_H
#define SOLUTION_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
  char *val;
  struct Node *next;
} Node;

Node *new_node(char *v);

Node *remove_node(Node *head, const char *target);

void free_list(Node *head);

#endif // SOLUTION_H
