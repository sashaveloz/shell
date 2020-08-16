#include "holberton.h"

/**
 * split - creates an array of string
 * @lineptr: string
 * Return: array of string or NULL
 */

char **split(char *lineptr)
{
	char **arg = NULL, *token = NULL;
	int count = 0, space = 0;

	if (lineptr == NULL)
		return (NULL);

	for (count = 0; lineptr[count]; count++)
	{
		if (lineptr[count] == ' ')
			space++;
	}
	if ((space + 1) == strlen(lineptr))
		return (NULL);
	arg = malloc(sizeof(char *) * (space + 2));
	if (arg == NULL)
		return (NULL);

	token = strtok(lineptr, " \n\t\r");
	for (count = 0; token != NULL; count++)
	{
		arg[count] = token;
		token = strtok(NULL, " \n\t\r");
	}
	arg[count] = NULL;
	return (arg);
}
