#ifndef SIMPLE_SHELL

#define SIMPLE_SHELL

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/stat.h>


int main(void);
extern char **environ;
int _which(char **tok_tab);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
void _exit_(__attribute__((unused))char **argv);
void _env(void);
int _strcmp(char *s1, char *s2);
char **rn_split(void);
int builtin(char *str);
char *_getenv(const char *name);

#endif
