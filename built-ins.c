#include "holberton.h"

/**
 *exit_b - Built-in to exit
 *@arg: Arguments
 *@lineptr: Input string
 *@_exit: Number of exit
 */

void exit_b(char **arg, char *lineptr, int _exit)
{
	int status = 0;

	if (!arg[1])
	{
		free(lineptr);
		free(arg);
		exit(_exit);
	}
	status = atoi(arg[1]);
	free(lineptr);
	free(arg);
	exit(status);
}

/**
 *print_env - Built-in to enviroment
 *@env: Enviroment
 *Return: 0
 */

void print_env(char **env)
{
	size_t run = 0;

	while (env[run])
	{
		write(STDOUT_FILENO, env[run], strlen(env[run]));
		write(STDOUT_FILENO, "\n", 1);
		run++;
	}
}
