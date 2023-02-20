/**
 * list data structure containing the tasks in the system
 */

#include "task.h"

struct Node {
    Task *task;
    struct Node *next;
};

// insert and delete operations.
void insert(struct Node **head, Task *newTask);
void delete(struct Node **head, Task *task);
void traverse(struct Node *head);
