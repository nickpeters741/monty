#include "monty.h"

void pall(stack_t **head, unsigned int line_number)
{
	stack_t *temp = *head;
	int counter = 0;
	(void) line_number;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		counter++;
		temp = temp->next;
	}



}

