#include "holberton.h"

/**
 * main - Principal file for shell
 * Return: 0
 */

int main(void)
{
	char *lineptr = NULL;

	while (1)
	{
		lineptr = prompt();
		if (lineptr)
			free(lineptr);
	}
	return (0);
}
