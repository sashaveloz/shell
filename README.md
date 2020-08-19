# 0x16. C - Simple_Shell

## Introduction

This is a project executed by Sasha Veloz and Valentina Castillo, in order to put into practice the
knowledge acquired during the development of the 1st trimester of the engineering software program.

## Description

Simply put, the shell is a program that takes commands from the keyboard and gives them to the operating system to perform.

## Requirements

* Your C programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic.
* All files were created and compiled on Ubuntu 14.04.4 LTS USING GCC 4.8.4 with the gcc flags: -Wall -Werror -Wextra -Pedantic *.c'
* All files were linted for syntax and style with [Betty](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl).

## Functions and system calls

This functions and system calls are the only ones that we are allowed to use.


|FUNCTION| MAN |
|--------|-----|
|access  |(man 2 access)|
|chdir|(man 2 chdir)|
|close|(man 2 close)|
|closedir|(man 3 closedir)|
|execve|(man 2 execve)|
|exit|(man 3 exit)|
| _exit|(man 2 _exit)|
|fflush|(man 3 fflush)|
|fork|(man 2 fork)|
|free|(man 3 free)|
|getcwd|(man 3 getcwd)|
|getline|(man 3 getline)|
|isatty|(man 3 isatty)|
|kill|(man 2 kill)|
|malloc|(man 3 malloc)|
|open|(man 2 open)|
|opendir|(man 3 opendir)|
|perror|(man 3 perror)|
|read|(man 2 read)|
|readdir|(man 3 readdir)|
|signal|(man 2 signal)|
|stat (__xstat)|(man 2 stat)|
|lstat (__lxstat)|(man 2 lstat)|
|fstat (__fxstat)|(man 2 fstat)|
|strtok|(man 3 strtok)|
|wait|(man 2 wait)|
|waitpid|(man 2 waitpid)|
|wait3|(man 2 wait3)|
|wait4|(man 2 wait4)|
|write|(man 2 write)|


Additionally we will create the following functions for the proper execution of the _printf function.

* print_char - Function that print a char. OJO CAMBIAR
* print_string - Function that print a string. OJO CAMBIAR
* print_percent - Function that print a percent.OJO CAMBIAR
* print_num - Function that print a number.
* print_numbers - Function print numbers.


## Files

* [_printf.c](https://github.com/sashaveloz/printf/blob/master/_printf.c)
* [array_struct.c](https://github.com/sashaveloz/printf/blob/master/array_struct.c)
* [func_print.c](https://github.com/sashaveloz/printf/blob/master/func_print.c)
* [holberton.h](https://github.com/sashaveloz/printf/blob/master/holberton.h)
* [Flowchart](https://drive.google.com/file/d/1eHBIKipdDJQ8Ejm77TQdJYJ9xVR6Q99_/view?usp=sharing)





## Usage

* int age;
age = 25;
printf ( "I am %d years old\n", age );

In this example, printf has two arguments. The first is a string: "I am %d years old\n". The second is an integer, age.

* In that case, the first

format specification goes with the first additional argument, second goes with second, and so forth. Here is an example:

int x = 5, y = 10;
printf ( "x is %d and y is %d\n", x, y );


## Prototype

int _printf(const char *format, ...);


## Authors

***Valentina Castillo***
Twitter [@diavale86](https://twitter.com/diavale86)  
***Sasha Martina Veloz***
Twitter [@velozsasha](https://twitter.com/velozsasha)

