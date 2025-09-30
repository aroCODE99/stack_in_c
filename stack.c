#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "stack.h"

struct stack init_stack() {
	struct stack s;
	s.nums = (int*) malloc(DEFAULT_SIZE * sizeof(int)); 
	s.ptr = -1;
	s.curr_size = DEFAULT_SIZE;
	return s;
}

void extend_stack(struct stack *s) {
    int new_size = s->curr_size * 2;
    int *tmp = realloc(s->nums, new_size * sizeof(int));
    if (tmp == NULL) {
        printf("Error: realloc failed\n");
        exit(1);
    }
    s->nums = tmp;
    s->curr_size = new_size;
}

void push(struct stack* s, int num) {
	if (s->ptr == s->curr_size - 1) {
		extend_stack(s);
		s->nums[++s->ptr] = num;
		return;
	}
	s->nums[++s->ptr] = num;
}

void pop(struct stack* s) {
	if (s->ptr > -1) {
		s->nums[s->ptr--] = -1; // so this just means space is free
	}
}

int isEmpty(struct stack* s) {
	return s->ptr == -1;
}

void display_stack(struct stack* s) {
	for (int i = 0; i < s->curr_size; i++) {
		printf("%d -> ", s->nums[i]);
	}
	printf("\n");
}

