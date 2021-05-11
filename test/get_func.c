#include "monty.h"

void (*get_op_func(char *s))(stack_t **head, unsigned int line_number)
{
	instruction_t opcodes[] = {
				{"push", push},
				{"pall", pall}
	};

	int i = 0;
	
	while (i < 2)
	{
		printf("Checking iteration [%d] for '%s' against %s\n",i, opcodes[i].opcode, s);
		if (strcmp(opcodes[i].opcode, s) == 0)
		{
			return (opcodes[i].f);
		}
		i++;
	}

	return (NULL);
}
