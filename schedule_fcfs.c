//
// Created by  Harry Staley on 3/20/19.
//
#include <stdlib.h>
#include <zconf.h>
#include <stdio.h>
#include <unistd.h>
#include "task.h"
#include "list.h"
#include "schedulers.h"

#define MIN_PRIORITY 1
#define MAX_PRIORITY 10

<<<<<<< Updated upstream
<<<<<<< Updated upstream
<<<<<<< Updated upstream
struct node *head = NULL;

void create(char *name, int priority, int burst) {
    printf("VALUES PRIOR TO TASK LOAD\n");
    printf("N: %s\n", name);
    printf("P: %d\n", priority);
    printf("B: %d\n", burst);

	// Create task
	Task newTask = { .name = name, .tid = TID, .priority = priority, .burst = burst };
	printf("VALUES AFTER TASK LOAD\n");
    printf("N: %s\n", newTask.name);
    printf("P: %d\n", newTask.priority);
    printf("B: %d\n", newTask.burst);

    if (head != NULL) {
        // Inserting Node pointer and Task pointer objects
        insert(&head, &newTask);
    } else {
        // Create the head Node
        head = (struct node *)malloc(sizeof(struct node));
        head->task = &newTask;
        head->next = NULL;
        printf("VALUES AFTER HEAD LOAD\n");
        printf("N: %s\n", head->task->name);
        printf("P: %d\n", head->task->priority);
        printf("B: %d\n", head->task->burst);

=======
struct Node *head = NULL;

void create(Task *newTask) {


=======
struct Node *head = NULL;

void create(Task *newTask) {


>>>>>>> Stashed changes
=======
struct Node *head = NULL;

void create(Task *newTask) {


>>>>>>> Stashed changes
    if (head == NULL) {
        head = malloc(sizeof(struct Node));
        head->task = newTask;
        head->next = NULL;
    } else {
        // Inserting Node pointer and Task pointer objects
        insert(&head, newTask);
<<<<<<< Updated upstream
<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes
    }
}

// invoke the scheduler
void schedule() {
	// Traverse List
    traverse(head);
}
