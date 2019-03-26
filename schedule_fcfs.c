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

struct node *head = NULL;

void create(char *name, int priority, int burst) {

	// Create task
	Task newTask = { .name = name, .tid = TID, .priority = priority, .burstburst };

	if (head != NULL) {
        // Inserting Node pointer and Task pointer objects
        insert(&head, &newTask);
    } else {
        // Create the head Node
        head = malloc(sizeof(struct node));
        head->task = newTask;
        head->next = NULL;
    }
}

// invoke the scheduler
void schedule() {
	// Traverse List
    traverse(head);
}
