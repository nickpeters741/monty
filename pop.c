#include "monty.h"

/**
  * pop - Removes the element at the top of the stack
  * @stack: The stack whose top element is to be removed
  * @line_number: The line number of the opcode currently being executed
  */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = *stack;
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}

	if (temp->next == NULL)
	{
		free(temp);
		*stack = NULL;
	}
	else
	{
		(*stack) = (*stack)->next;
		(*stack)->prev = NULL;
		free(temp);
	}
}
