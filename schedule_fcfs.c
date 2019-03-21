//
// Created by  Harry Staley on 3/20/19.
//

#include <stdio.h>
#include <unistd.h>
#include "task.h"
#include "list.h"
#include "schedulers.h"

#define MIN_PRIORITY 1
#define MAX_PRIORITY 10
#define TID 1

Task *sendTask = NULL;
struct node *myNode = NULL;


// add a task to the list
void add(char *name, int priority, int burst) {

	Task myTask = { name, TID, priority, burst };
	sendTask = &myTask;

	struct node next;
	struct node a = { sendTask, &next };
	myNode = &a;

	printf("Name: %s\tPriority: %d\tBurst: %d\n", myTask.name, myTask.priority, myTask.burst);

	insert(&myNode, sendTask);

	schedule();

}

// invoke the scheduler
void schedule(){

}
