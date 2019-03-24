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
	Task myTask = { name, TID, priority, burst };
	//printf("Name: %s\tPriority: %d\tBurst: %d\n", myTask.name, myTask.priority, myTask.burst);

	// Create Node
	struct node *head = NULL;
	head = malloc(sizeof(struct node));

	if (head == NULL) {
		perror("error");
	}

	head->task = &myTask;
	head->next = NULL;

	while (head != NULL) {

		printf("Name: %s\tPriority: %d\tBurst: %d\n", head->task->name, head->task->priority, head->task->burst);
		head = head->next;
	}

	//insert(head, myTask);

	/*sendTask = &myTask;

	struct node next;
	struct node a = { sendTask, &next };
	myNode = &a;*/

}

// invoke the scheduler
void schedule(){

}
