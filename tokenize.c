#include "monty.h"

/**
  * tokenize - Tokenizes a string to return an array of words
  * @s: The string to be tokenized
  *
  * Return: An array of the words
  */

char **tokenize(char *s)
{
	char *token;
	int i = 0;
	static char *arr[10] = {NULL};

	token = strtok(s, " ");
	while (token != NULL)
	{
		arr[i++] = token;
		token = strtok(NULL, " ");
	}
	/*arr[i++] = NULL;*/

	return (arr);
}
