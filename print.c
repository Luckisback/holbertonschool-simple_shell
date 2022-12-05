#include "main.h"

/**
 * print_char - function that print character
 * @c: print char
 * return: void
*/
void print_char(char c)
{
	write(1, &c, 1);
}

/**
 * print_str - function that print string
 * @str: print str
 * Return: void
*/
void print_str(char *str)
{
	if (!*str)
		return;
	print_char(*str++);
	print_str(str);
}
/*
void _printenv(env_t *prenv)
{
	if (!prenv)
		return;

	print_str(prenv->name);
	print_str("=");
	if (prenv->value != 0)
		print_str(prenv->value);
	print_str("\n");
	_printenv(prenv->next);
}
*/
/**
 * _env - print the environment variable
 * @i: usigned int
 * Return: 0
 */
/*
int _env(unsigned int i)
{
	i = 0;

	while(environ[i])
		_printenv(environ[i++]);
	return (0);
}*/
