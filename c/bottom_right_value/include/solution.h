#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

// Define the Node struct
typedef struct Node {
  char *val;
  struct Node *left;
  struct Node *right;
} Node;

// Define a simple Queue
typedef struct {
  Node **array;
  int front;
  int rear;
  int size;
  int capacity;
} Queue;

Node *createNode(const char *val);
Queue *createQueue(int capacity);
int isFull(Queue *queue);
int isEmpty(Queue *queue);
void enqueue(Queue *queue, Node *item);
Node *dequeue(Queue *queue);

char *bottomRightValue(Node *root);

