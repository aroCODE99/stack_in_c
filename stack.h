#ifndef STACK_H
#define STACK_H

#define DEFAULT_SIZE 4

struct stack {
	int* nums;
	int ptr;
	int curr_size;
};

struct stack init_stack(); 

void extend_stack(struct stack* s);

void push(struct stack* s, int num); 

void pop(struct stack* s); 

void display_stack(struct stack* s);

int isEmpty(struct stack* s); 

#endif
