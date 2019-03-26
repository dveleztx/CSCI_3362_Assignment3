/**
 * Various list operations
 */
 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "list.h"
#include "task.h"


// create a new task to the list of tasks
void insert(struct node **head, Task *newTask) {
    // create the new task to the list
    struct node *newNode = malloc(sizeof(struct node));

    newNode->task = newTask;
    newNode->next = *head;
    *head = newNode;
}

// delete the selected task from the list
void delete(struct node **head, Task *task) {
    struct node *temp;
    struct node *prev;

    temp = *head;
    // special case - beginning of list
    if (strcmp(task->name,temp->task->name) == 0) {
        *head = (*head)->next;
    } else {
        // interior or last element in the list
        prev = *head;
        temp = temp->next;
        while (strcmp(task->name,temp->task->name) != 0) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = temp->next;
    }
}

// traverse the list
void traverse(struct node *head) {
	struct node *temp;
    temp = head;

    int waitTime = 0;
    printf("Name Priority  Burst       Wait\n");
    while (temp != NULL) {
        //char *name = temp->task->name;
        int priority = temp->task->priority;
        //int burst = temp->task->burst;
        printf("[%d]/n", priority);
        //printf("[%s] [%d] [%d] [%d]\n",name, priority, burst, waitTime);
        waitTime = waitTime + temp->task->burst;
        temp = temp->next;
    }
}
