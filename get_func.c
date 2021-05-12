#include "monty.h"

/**
  * get_op_func - Get the opcode's corresponding function
  * @s: The opcode to get a function for
  *
  * Return: A pointer to the corresponding function
  */

void (*get_op_func(char *s))(stack_t **head, unsigned int line_number)
{
	int i = 0;
	instruction_t opcodes[] = {
				{"push", push},
				{"pall", pall},
				{"pint", pint},
				{"pop", pop},
				{"add", add},
				{"swap", swap},
				{"nop", nop},
				{"sub", sub}
	};

	while (i < 8)
	{
		if (strcmp(opcodes[i].opcode, s) == 0)
		{
			return (opcodes[i].f);
		}
		i++;
	}

	return (NULL);
}
