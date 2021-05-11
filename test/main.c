#include "monty.h"

int main(int argc, char *argv[])
{
	FILE *fp;
	char * line = NULL;
	size_t len = 0;
	char  **arr;
	int i;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	/* Open the file */
	fp = fopen(argv[1], "r");
	/* Confirm the file has opened succesfully */
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	/* Read the file one line at a time */
	while (getline(&line, &len, fp) != -1)
	{
		/* array containing the opcode and data */
		arr = tokenize(line);
	
		/* Print the array */
		for (i = 0; arr[i] != NULL; i++)
			printf("arr[%d]: %s\n", i, arr[i]);

	}

	free(arr);
	fclose(fp);
	return (0);
}
