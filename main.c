#include "holberton.h"

/**
 *main - Principal file for shell
 *@ac: Argument count
 *@av: Argument value
 *@env: Environment
 *Return: 0
 */

int main(int ac, char **av, char **env)
{
	char *lineptr = NULL, **arg = NULL;
	int np = 0, _exit = 0, c = 0;
	(void)ac;

	signal(SIGINT, ctrl_c);
	while (1)
	{
		lineptr = prompt();
		if (lineptr)
		{
			np++;
			arg = split(lineptr);
			if (!arg)
			{
				free(lineptr);
				continue;
			}
			if (!_strcmp(arg[0], "exit"))
				exit_b(arg, lineptr, _exit);
			if (!_strcmp(arg[0], "env"))
				print_env(env);
			else
			{
				c = concat_path(&arg[0], env);
				_exit = execute(arg, av, env, lineptr, np, c);
				if (c == 0)
					free(arg[0]);
			}
			free(arg);
		}
		else
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			exit(_exit);
		}
		free(lineptr);
	}
	return (_exit);
}
