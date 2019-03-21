//
// Created by  Harry Staley on 3/20/19.
//
<<<<<<< HEAD
#include <stdlib.h>
#include <zconf.h>
=======

#include <stdio.h>
#include <unistd.h>
#include "task.h"
#include "list.h"
#include "schedulers.h"
#include "list.h"
#include "task.h"

#define MIN_PRIORITY 1
#define MAX_PRIORITY 10

Task *sendTask = NULL;
struct node *myNode = NULL;


void add(char *name, int priority, int burst) {

	schedule();

	Task myTask = { name, 1, priority, burst };
	sendTask = &myTask;

	struct node next;
	struct node a = { sendTask, &next };
	myNode = &a;

	insert(&myNode, sendTask);

	schedule();

>>>>>>> 205bd558a477f73809095d7a14131287d43a127f
}

// invoke the scheduler
void schedule(){

}
