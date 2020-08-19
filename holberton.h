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
int execute(char **arg, char **av, char **env, char *lineptr, int np, int c);
char *_getpath(char **env);
int concat_path(char **arg, char **env);
void exit_b(char **arg, char *lineptr, int _exit);
void print_env(char **env);

char *_strcat(char *dest, char *src);
size_t _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
size_t _strncmp(char *s1, char *s2, size_t n);
size_t _strlen(char *s);

#endif /* HOLBERTON_H */
