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
	if (status < 0)
		status = 2;
	if (status > 232)
		status = 232;

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
		write(STDOUT_FILENO, env[run], _strlen(env[run]));
		write(STDOUT_FILENO, "\n", 1);
		run++;
	}
}

/**
 *ctrl_c - To avoid closing the program when ctrl + c is pressed
 *@signal: void
 */

void ctrl_c(int signal)
{
	(void)signal;

	write(STDOUT_FILENO, "\n", 1);
	write(STDOUT_FILENO, "$ ", 2);
}
