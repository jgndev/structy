#include "solution.h"

Node *createNode(const char *val) {
  Node *newNode = (Node*)malloc(sizeof(Node));
  newNode->val = strdup(val);
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

Queue *createQueue(int capacity) {
  Queue *queue = (Queue*)malloc(sizeof(Queue));
  queue->array = (Node**)malloc(capacity * sizeof(Node*));
  queue->front = queue->size = 0;
  queue->rear = capacity - 1;
  queue->capacity = capacity;

  return queue;
}

int isFull(Queue *queue) {
  return (queue->size == queue->capacity);
}

int isEmpty(Queue *queue) {
  return (queue->size == 0);
}

void enqueue(Queue *queue, Node *item) {
  if (isFull(queue)) {
    return;
  }

  queue->rear = (queue->rear + 1) % queue->capacity;
  queue->array[queue->rear] = item;
  queue->size = queue->size + 1;
}

Node *dequeue(Queue *queue) {
  if (isEmpty(queue)) {
    return NULL;
  }

  Node *item = queue->array[queue->front];
  queue->front = (queue->front + 1) % queue->capacity;
  queue->size = queue->size - 1;

  return item;
}

char *bottomRightValue(Node *root) {
  if (root == NULL) {
    return NULL;
  }

  Queue *queue = createQueue(1000);
  enqueue(queue, root);
  Node *current = NULL;

  while (!isEmpty(queue)) {
    current = dequeue(queue);

    if (current->left != NULL) {
      enqueue(queue, current->left);
    }

    if (current->right != NULL) {
      enqueue(queue, current->right);
    }
  }

  char *result;

  if (current == NULL) {
    result = NULL;
  } else {
    result = current->val;
  }

  free(queue->array);
  free(queue);

  return result;
}