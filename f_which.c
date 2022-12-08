#include "main.h"

/**
 * _which - a fucntion that parse the program to extract
 * the commande path to be executed.
 * @tok_tab: a argument that brings the token (commande)
 * enter through sdtin
 * Return: 0 for success
 **/
int _which(char **tok_tab)
{
	char *cmd = tok_tab[0];
	/*int notfound = 0;*/
	char *_token = NULL, *_path[] = {NULL};
	char *src_path = getenv("PATH");
	/*struct stat st;*/

	if (!src_path)
	{
		perror("there is an allocation pb");
		exit(EXIT_FAILURE);
	}
	_token = malloc(sizeof(char*) * strlen(src_path));
	_token = src_path;
	printf("PATH TO VALEUR DE TOKEN:  %s\n", _token);

	if (_token != NULL)
		_token = strtok(src_path, ":");

	printf("ICI LE PREMIER TOKEN: %s\n", _token);

	if (_token)
	{
		_path[0] = malloc(sizeof(_token) * strlen(src_path));
		_path[0] = _token;
		strcat(_path[0], "/");
		strcat(_path[0], cmd);
		printf("ICI LA CONCATENATION:  %s\n", _path[0]);

		if (!_token)
		{
			perror("there is an allocation pb");
			exit(EXIT_FAILURE);
		}
		f_execut(_path[0]);/*call of the function to execut the cmd*/
	}
	return (0);
}
