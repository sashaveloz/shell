#include "holberton.h"

/**
 *exit_b - Built-in to exit
 *@arg: Arguments
 *@lineptr: Input string
 *@_exit: Number of exit
 *@np: Number of process
 *@av: Name of program
 */

void exit_b(char **arg, char *lineptr, int _exit, int np, char **av)
{
	int status = 0, idx;
	char *format = "%s: %d: exit: Illegal number: %d\n";
	char *format1 = "%s: %d: exit: Illegal number: %s\n";

	if (!arg[1])
	{
		free(lineptr);
		free(arg);
		exit(_exit);
	}
	for (idx = 0; arg[1][idx] != '\0'; idx++)
	{
		if (arg[1][idx] < 48 && arg[1][idx] > 57)
		{
			fprintf(stderr, format1, av[0], np, arg[1]);
			free(lineptr);
			free(arg);
			exit(2);
		}
	}
	status = atoi(arg[1]);
	if (status < 0)
	{
		status = 2;
		fprintf(stderr, format, av[0], np, status);
	}
	if (status == 1000)
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
