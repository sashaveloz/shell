#include "holberton.h"

/**
 *concat_path - Concatenates paths
 *@arg: Command
 *@env: Envitonment
 *Return: 0 or -1
 */

int concat_path(char **arg, char **env)
{
	char *token = NULL, *path = NULL, *dir = NULL;
	size_t folder, command;
	struct stat stat_buf;

	if (stat(*arg, &stat_buf) == 0)
		return (-1);
	path = _getpath(env);
	if (!path)
		return (-1);
	token = strtok(path, ":");
	command = strlen(*arg);
	while (token)
	{
		folder = strlen(token);
		dir = malloc(sizeof(char) * (folder + command + 2));
		if (!dir)
		{
			free(path);
			return (-1);
		}
		dir = strcpy(dir, token);
		strcat(dir, "/");
		strcat(dir, *arg);

		if (stat(dir, &stat_buf) == 0)
		{
			*arg = dir;
			free(path);
			return (0);
		}
		free(dir);
		token = strtok(NULL, ":");
	}
	free(path);
	return (-1);
}
