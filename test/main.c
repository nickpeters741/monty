#include "monty.h"

int main(int argc, char *argv[])
{
	FILE *fp;
	char *line = NULL;
	size_t len = 0;
	char **arr;
	stack_t *stack; 
	unsigned int line_number;
	void (*f)(stack_t **stack, unsigned int line_number);
	int length = 0;

	stack = NULL;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	/* Open the file */
	fp = fopen(argv[1], "r");
	/* Confirm the file has opened succesfully */
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	/* Read the file one line at a time */
	line_number = 1;
	while ((length = getline(&line, &len, fp)) != -1)
	{
		if (line[length - 1] == '\n')
			line[length - 1] = '\0';
		/* array containing the opcode and data */
		arr = tokenize(line);
	
		/* Get opcode corresponding function */
		f = get_op_func(arr[0]);

		if (f == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s",
					line_number, arr[0]);
			exit(EXIT_FAILURE);
		}

		/* Store the data */
		if (arr[1])
			push_data = arr[1];

		/* Execute Function */
		f(&stack, line_number);

		line_number++;
	}

	fclose(fp);
	return (0);
}
