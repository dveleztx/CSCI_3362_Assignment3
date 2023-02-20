/**
 * Various list operations
 */
 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "list.h"
#include "task.h"

// create a new task to the list of tasks
<<<<<<< Updated upstream
<<<<<<< Updated upstream
<<<<<<< Updated upstream
void insert(struct node **head, Task *newTask) {
    // create the new task to the list
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    /* If memory is not allocated for newNode */
    if(newNode == NULL)  {
        printf("Unable to allocate memory.");
        return;
    }
=======
=======
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes
void insert(struct Node **head, Task *newTask) {
    // Allocate a new node
    struct Node* newNode = malloc(sizeof(struct Node));
    // insert the data in the node
<<<<<<< Updated upstream
<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes
    newNode->task = newTask;
    // make next of newNode as the head node.
    newNode->next = *head;
    // move the head to point to the new node.
    *head = newNode;
    printf("VALUES AFTER NEW NODE LOAD\n");
    printf("N: %s\n", newNode->task->name);
    printf("P: %d\n", newNode->task->priority);
    printf("B: %d\n", newNode->task->burst);
    //printf("VALUES AFTER NEW NODE BECOMES HEAD\n");
    //printf("N: %s\n", head->task->name);
    //printf("P: %d\n", head->task->priority);
    //printf("B: %d\n", head->task->burst);
}

// delete the selected task from the list
void delete(struct Node **head, Task *task) {
    struct Node *temp;
    struct Node *prev;

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
<<<<<<< Updated upstream
<<<<<<< Updated upstream
<<<<<<< Updated upstream
void traverse(struct node *head) {
    struct node *temp;
=======
void traverse(struct Node *head) {
	struct Node *temp;
>>>>>>> Stashed changes
=======
void traverse(struct Node *head) {
	struct Node *temp;
>>>>>>> Stashed changes
=======
void traverse(struct Node *head) {
	struct Node *temp;
>>>>>>> Stashed changes
    temp = head;

    int waitTime = 0;
    printf("Name Priority  Burst       Wait\n");
    while (temp != NULL) {
<<<<<<< Updated upstream
<<<<<<< Updated upstream
<<<<<<< Updated upstream
        char *task_name = temp->task->name;
        int priority = temp->task->priority;
        int burst = temp->task->burst;
        //printf("[%s]\n", task_name);
        printf("[%s] [%d] [%d] [%d]\n",task_name, priority, burst, waitTime);
        waitTime = waitTime + temp->task->burst;
=======
        char *name = temp->task->name;
        int priority = temp->task->priority;
        int burst = temp->task->burst;
        printf("%-10s%-10d%-12d%-10d\n",name, priority, burst, waitTime);
        waitTime = waitTime + burst;
>>>>>>> Stashed changes
=======
        char *name = temp->task->name;
        int priority = temp->task->priority;
        int burst = temp->task->burst;
        printf("%-10s%-10d%-12d%-10d\n",name, priority, burst, waitTime);
        waitTime = waitTime + burst;
>>>>>>> Stashed changes
=======
        char *name = temp->task->name;
        int priority = temp->task->priority;
        int burst = temp->task->burst;
        printf("%-10s%-10d%-12d%-10d\n",name, priority, burst, waitTime);
        waitTime = waitTime + burst;
>>>>>>> Stashed changes
        temp = temp->next;
    }
}
