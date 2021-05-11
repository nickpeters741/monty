#include "monty.h"

void (*get_op_func(char *s))(stack_t **head, unsigned int line_number)
{
	instruction_t opcodes[] = {
				{"push", push},
				{"pall", pall},
				{"pint", pint},
				{"pop", pop}
	};

	int i = 0;
	
	while (i < 4)
	{
		if (strcmp(opcodes[i].opcode, s) == 0)
		{
			return (opcodes[i].f);
		}
		i++;
	}

	return (NULL);
}
