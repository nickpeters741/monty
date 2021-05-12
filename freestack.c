#include "monty.h"

/**
  * free_stack - Frees the stack after all the commands are executed
  * @stack: Pointer to the stack to be freed
  */

void free_stack(stack_t *stack)
{
	stack_t *temp;

	while (stack != NULL)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}
