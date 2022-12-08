#ifndef SIMPLE_SHELL

#define SIMPLE_SHELL

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/stat.h>

extern char **environ;
int _which(char *argv[]);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int our_exit(char **argv);
int _env(unsigned int i);
int _token(char *_str);
void _prompt(void);
int sh_exec(char **argv);
int read_split(void);
int builtin(char *str);
int main(int argc, char **argv, char **envp);

#endif
