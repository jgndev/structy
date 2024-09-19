#ifndef SOLUTION_H
#define SOLUTION_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUEUE_SIZE 1000
#define MAX_STRING_SIZE 100

// Node structure
typedef struct Node {
  char val[MAX_STRING_SIZE];
  struct Node *left;
  struct Node *right;
} Node;

// Queue structure
typedef struct Queue {
  Node *items[MAX_QUEUE_SIZE];
  int front;
  int back;
} Queue;

char** breadth_first_values(Node *root, int *size);

#endif // SOLUTION_H
