### `C - Simple Shell` :dart:
Write a simple UNIX command interpreter.

## Decription:
Simple_shell is a standard command interpreter for the system.
In this Readme file we will browse the different main part of this challenge, 
which was been the creation of this program.

### `General`   :sunglasses:

* Who designed and implemented the original Unix operating system
* Who wrote the first version of the UNIX shell
* Who invented the B programming language (the direct predecessor to the C programming language)
* Who is Ken Thompson
* How does a shell work
* How to manipulate the environment of the current process
* What is the difference between a function and a system call
* How to create processes
* What are the three prototypes of main
* How does the shell use the PATH to find the programs
* How to execute another program with the execve system call
* How to suspend the execution of a process until one of its children terminates
* What is EOF / “end-of-file”?


### `List of allowed functions and system calls`     :floppy_disk:

| Commands |
|:-------------------------------|:---------------------------:|--------------------------------:|
| access (man 2 access)          | chdir (man 2 chdir)         |close (man 2 close)              | 
| closedir (man 3 closedir)      | execve (man 2 execve)       | exit (man 3 exit)               |
| exit (man 2 _ exit)            | fflush (man 3 fflush)       | fork (man 2 fork)               |
| free (man 3 free)              | getcwd (man 3 getcwd)       | getline (man 3 getline)         |
| getpid (man 2 getpid)          | isatty (man 3 isatty)       | kill (man 2 kill)               |
| malloc (man 3 malloc)          | open (man 2 open)           | opendir (man 3 opendir)         |
| perror (man 3 perror)          | read (man 2 read)           | readdir (man 3 readdir)         |
| signal (man 2 signal)          | stat ( _ xstat) (man 2 stat)| lstat ( __ lxstat) (man 2 lstat)|
| fstat (_ _fxstat) (man 2 fstat)| strtok (man 3 strtok)       | wait (man 2 wait)               |
| waitpid (man 2 waitpid)        | wait3 (man 2 wait3)         | wait4 (man 2 wait4)             |
| write (man 2 write)            | printf                      | fprintf                         |
| vfprintf                       | putchar                     | sprintf

###  `TASKS`  :atom:

0. README, man, AUTHORS 
1. Betty would be proud : a beautiful code that passes the Betty checks
2. Simple shell 0.1 : a UNIX command line interpreter.
3. Simple shell 0.2 : Handle command lines with arguments
4. Simple shell 0.3 : Handle the PATH  /  fork must not be called if the command doesn’t exist
5. Simple shell 0.4 : Implement the exit built-in, that exits the shell / Usage: exit
6. Simple shell 1.0 : Implement the env built-in, that prints the current environment

### `Compilation`    :gear:

``` 
* gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

* This fucntion has no return value

```
### Examples of execution: 

$ ls -l *.c
-rw-rw-r-- 1 bilo bilo  319 déc.   5 23:03 _getline.c
-rw-rw-r-- 1 bilo bilo   89 déc.   2 14:44 logo.c
-rw-rw-r-- 1 bilo bilo 1464 nov.  10 10:11 print_int.c

### Comande to run man page:

man ./man_1_simple_shell

### Solutions to check memory leaks
Two solutions are found to resolve a memory problems:

1- Valgrind: is a flexible program for debugging and profiling Linux
   executables. It consists of a core, which provides a synthetic CPU in
   software, and a series of debugging and profiling tools. The
   architecture is modular, so that new tools can be created easily and
   without disturbing the existing structure.
       
2- Using the option  __-fsanitize=address -g__ during GCC compilation. 
   This option provides many possibities to find easily the code line tha is 
   concerned by the fault at the origin of the memory leaks.

### `Resources`   :earth_africa:

* [*Unix shell*](https://intranet.hbtn.io/rltoken/McTQ6qvcqZZQlZtZdjdVnQ). 
* [*Thompson shell*](https://intranet.hbtn.io/rltoken/FLRzIA3zLln5XV7erPHgsQ).
* [*Ken Thompson*](https://intranet.hbtn.io/rltoken/Pzs_A3Wo6LTHE8WX_uKiWg).
* man or help: sh _(Run sh as well)_


	## :spider_web: Baptiste
	## :fist_raised: Jean-Luc

```

```
