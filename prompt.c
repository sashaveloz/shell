#include "holberton.h"

/**
 * prompt - print $ and wait for the user to type something.
 * Return: NULL or line string
 */

char *prompt(void)
{
	char *lineptr = NULL;
	size_t nbytes = 0;

	write(STDOUT_FILENO, "$ ", 2);
	if (getline(&lineptr, &nbytes, stdin) == -1)
		return (NULL);
	return (lineptr);
}
