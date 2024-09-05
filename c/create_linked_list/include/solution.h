#ifndef SOLUTION_H
#define SOLUTION_H

#include <stddef.h>
#include <string.h>

typedef struct Node {
  char *val;
  struct Node *next;

} Node;

Node *create_node(const char *value);

Node *create_linked_list(char **values, size_t n);

#endif // SOLUTION_H
