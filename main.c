#include "stack.h"

int main() {
	struct stack s = init_stack();
	push(&s, 5);
	push(&s, 6);
	push(&s, 7);
	push(&s, 8);
	push(&s, 9); 
	push(&s, 10);
	push(&s, 11);
	push(&s, 12);
	push(&s, 13);
	push(&s, 14);

	display_stack(&s);
	pop(&s);
	pop(&s);
	pop(&s);
	pop(&s);

	display_stack(&s);

	push(&s, 11);
	push(&s, 12);
	push(&s, 13);
	display_stack(&s);
}
