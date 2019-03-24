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
#define TID 1

void add(char *name, int priority, int burst) {

	// Create task
	Task newTask = { name, TID, priority, burst };

	// Create task pointer
	Task *myTask = &newTask;

	// Create Node
	struct node *head = NULL;
	head = malloc(sizeof(struct node));

	if (head == NULL) {
		perror("error");
	}

	// Assign Node to Task
	head->task = myTask;
	head->next = NULL;

	// Test contents of the Node Object
	while (head != NULL) {

		printf("Name: %s\tPriority: %d\tBurst: %d\n", head->task->name, head->task->priority, head->task->burst);
		head = head->next;
	}

	// Creating Node point to Node Object
	struct node *current = head;

	// Inserting Node pointer and Task pointer objects
	insert(&current, myTask);

}

// invoke the scheduler
void schedule(){

}
