#include "monty.h"

/**
  * sub - Subtracts the top element of the stack from the second top element
  * @stack: Address of stack whose top elements need to be subtracted
  * @line_number: Line number of opcode currently being executed
  */

void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int result = 0;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	result = (temp->next->n) - (temp->n);
	pop(stack, line_number);
	(*stack)->n = result;
}
