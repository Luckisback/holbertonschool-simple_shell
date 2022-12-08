#include "main.h"

/**
 * _exit_ - exit the simple shell
 * @argv: unused
 * Return: 0
*/

int _exit_(__attribute__((unused))char **argv)
{
	exit(0);
}

/**
 * _env - print the environment variable
 * Return: 0
 */

void _env(void)
{
	int i = 0;

	while (environ[i])
		printf("%s\n", (environ[i++]);
}
/**
 * builtin -function that checked if the content of the str is a builtin or not
 * @str: string to receive
 * Return: 1
 */
int builtin(char *str)
{
	int status = 0;

	if (_strcmp(str, "exit") == 0)
	{
		_exit_(status);
		return (0);
	}
	if (_strcmp(&str == "env") == 0)
	{
		_env();
		return (0);
	}
	return (1);
}
