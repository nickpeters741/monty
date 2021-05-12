#include "monty.h"

/**
  * push - Adds and element to the top of a stack
  * @stack: Adress of the stack where the element is to be added
  * @line_number: The line number of the opcode currently being executed
  */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	int i = 0;

	for (i = 0; push_data[i] != '\0'; i++)
	{
		if (isdigit(push_data[i]) == 0)
		{
			fprintf(stderr, "L%d: usage: push integer\n",
					line_number);
			exit(EXIT_FAILURE);
		}
	}



	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	new_node->n = atoi(push_data);
	new_node->prev = NULL;
	new_node->next = NULL;

	/* In case head is an empty list */
	if (*stack == NULL)
	{
		*stack = new_node;
	}
	/* If head is not an empty list */
	else
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
		*stack = new_node;
	}
}
