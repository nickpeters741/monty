#include "monty.h"

/**
  * pint - Prints the element at the top of the stack
  * @stack: Stack to print the element from
  * @line_number: The line number of the opcode currently being executed
  */

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (temp == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", temp->n);
}
