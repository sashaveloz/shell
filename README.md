# Simple_Shell

## Introduction

This is a project (0x16 C) executed by Sasha Veloz and Valentina Castillo, in order to put into practice the
knowledge acquired during the development of the 1st trimester of the engineering software program.

## Description

Simply put, the shell is a program that takes commands from the keyboard and gives them to the operating system to perform.

## Requirements

* Your C programs and functions will be compiled with **gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic**.
* All files were created and compiled on Ubuntu 14.04.4 LTS USING GCC 4.8.4 with the gcc flags: **-Wall -Werror -Wextra -Pedantic *.c'**
* All files were linted for syntax and style with [Betty](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl).

## Functions and system calls

This functions and system calls are the only ones that we are allowed to use.


|FUNCTION| MAN |
|--------|-----|
|access  |man 2 access|
|chdir|man 2 chdir|
|close|man 2 close|
|closedir|man 3 closedir|
|execve|man 2 execve|
|exit|man 3 exit|
| _exit|man 2 _exit|
|fflush|man 3 fflush|
|fork|man 2 fork|
|free|man 3 free|
|getcwd|man 3 getcwd|
|getline|man 3 getline|
|isatty|man 3 isatty|
|kill|man 2 kill|
|malloc|man 3 malloc|
|open|man 2 open|
|opendir|man 3 opendir|
|perror|man 3 perror|
|read|man 2 read|
|readdir|man 3 readdir|
|signal|man 2 signal|
|stat (__xstat)|man 2 stat|
|lstat (__lxstat)|man 2 lstat|
|fstat (__fxstat)|man 2 fstat|
|strtok|man 3 strtok|
|wait|man 2 wait|
|waitpid|man 2 waitpid|
|wait3|man 2 wait3|
|wait4|man 2 wait4|
|write|man 2 write|


Additionally we will create the following functions for the proper execution of the simple_shell.

|NAME|DESCRIPTION|
-----|-----------|
|[prompt.c](https://github.com/sashaveloz/simple_shell/blob/master/prompt.c)|Print us the $ and get what the user types|
|[split.c](https://github.com/sashaveloz/simple_shell/blob/master/split.c)|Divide the input into arguments|
|[execute.c](https://github.com/sashaveloz/simple_shell/blob/master/execute.c)|Execute commands entered by the user|
|[get_path](https://github.com/sashaveloz/simple_shell/blob/master/get_path.c)|Env runs us to find the PATH
|[concat_path.c](https://github.com/sashaveloz/simple_shell/blob/master/concat_path.c)|Concatenate the path with the command|
|[built-ins.c](https://github.com/sashaveloz/simple_shell/blob/master/built-ins.c)|Built-ins functions exit and print env|
|[str_fuctions.c](https://github.com/sashaveloz/simple_shell/blob/master/str_functions.c)|Our version of str functions|
|[main.c](https://github.com/sashaveloz/simple_shell/blob/master/main.c)|Principal function of our shell|

For the execution of this project, we are also going to use our version of [str functions](https://github.com/sashaveloz/simple_shell/blob/master/str_functions.c), listed below:

|File|	   Description| Man|
|--------|------------|--------|
|_strcat.c|simulates original strcat|man 3 strcat|
|_strcmp.c|simulates original strcmp|man 3 strcmp|
|_strcpy.c|simulates original strcpy|man 3 strcpy|
|_strlen.c|simulates original strlen|man 3 strlen|
|_strncmp.c|simulates original strncmp|man 3 strncmp|
|[holberton.h](https://github.com/sashaveloz/simple_shell/blob/master/holberton.h)|contains prototypes and libraries|NA|

## [Flowchart](https://app.diagrams.net/#G1ghh92jjUK03Z4PWrC9xhUt3XwAdscjnw)

In this flowchart you can see the flow of our program.

## Installation

For you to use our simple_shell you have to clone this repository **"https://github.com/sashaveloz/simple_shell.git"**:

* Change directories into the repository: cd simple_shell.
* Compile: see installation instructions later.
* Run the shell: ./hsh.

## Compilation

For this simple_shell to work correctly you have to use the next compilator:

* gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

You may also need to use the next flag -gccdb3. 


## Usage

Your shell should work like this in interactive mode:

```c
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```c

But also in non-interactive mode:

```c
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```c

*In this project one of the requirements was to perform the follwing tasks;*

### 0. [README.md](https://github.com/sashaveloz/simple_shell/blob/master/README.md),[man](https://github.com/sashaveloz/simple_shell/blob/master/man_1_simple_shell),[AUTHORS](https://github.com/sashaveloz/simple_shell/blob/master/AUTHORS).

* Write a README. 
* Write a man for your shell.
* You should have an AUTHORS file at the root of your repository, listing all.

### 1. Betty would be proud

### 2. [Simple shell 0.1](https://github.com/sashaveloz/simple_shell/blob/master/main.c)

Your Shell should:

* Display a prompt and wait for the user to type a command. A command line always ends with a new line.
* The prompt is displayed again each time a command has been executed.
* The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
* The command lines are made only of one word. No arguments will be passed to programs.
* If an executable cannot be found, print an error message and display the prompt again.
* Handle errors.
* You have to handle the “end of file” condition (Ctrl+D)

You don’t have to:

* Use the PATH.
* Implement built-ins.
* Handle special characters : ", ', `, \, *, &, #.
* Be able to move the cursor.
* Handle commands with arguments.

### 3. [Simple shell 0.2](https://github.com/sashaveloz/simple_shell/blob/master/split.c)

Simple shell 0.1 +

* Handle command lines with arguments.

### 4.[Simple shell 0.3](https://github.com/sashaveloz/simple_shell/blob/master/concat_path.c)

Simple shell 0.2 +

* Handle the PATH.

### 5. [Simple shell 0.4](https://github.com/sashaveloz/simple_shell/blob/master/main.c)

Simple shell 0.3 +

* Implement the exit built-in, that exits the shell.
* Usage: exit.
* You don’t have to handle any argument to the built-in exit.

### 6. [Simple shell 1.0](https://github.com/sashaveloz/simple_shell/blob/master/built-ins.c)

Simple shell 0.4 +

* Implement the env built-in, that prints the current environment.

### 7. [What happens when you type ls -l in the shell](https://www.linkedin.com/pulse/what-happens-when-we-type-ls-l-shell-sasha-veloz/?published=t)

Blog post describing step by step what happens when you type ls -l and hit Enter in a shell.  


## Authors

***Valentina Castillo***
Twitter [@diavale86](https://twitter.com/diavale86)  
***Sasha Martina Veloz***
Twitter [@velozsasha](https://twitter.com/velozsasha)
