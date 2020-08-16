#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <errno.h>

char *prompt(void);
char **split(char *lineptr);
int execute(char **arg, char **av, char **env, char *lineptr, int nprocs);

#endif /* HOLBERTON_H */
