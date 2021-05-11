#include "monty.h"

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
