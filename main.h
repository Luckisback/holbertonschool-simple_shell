#ifndef SIMPLE_SHELL

#define SIMPLE_SHELL

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>

/**
 * struct env_s - environment variable
 * @name: environment name
 * @value: environment value
 * @global: result of name and value
 * @next: point to the next node
*/
typedef struct env_s
{
	char *name;
	char *value;
	char *global;
	struct env_s *next;
} env_t;

extern char **environ;
int our_exit(char **argv);
void print_char(char c);
void print_str(char *str);
void _printenv(env_t *prenv);
int _env(unsigned int i);
int _token(char *_str);
void _prompt(void);
int sh_exec(char **argv);
int main(int argc, char **argv);

#endif
