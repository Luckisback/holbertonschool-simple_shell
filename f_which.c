#include "main.h"

/**
 * _which - a fucntion that parse the program to extract
 * the commande path to be executed.
 * @tok_tab: a argument that brings the token (commande)
 * enter through sdtin
 * Return: 0 for success
 **/
char *_which(char **tok_tab)
{
	int notfound = 0;
	char *_token = NULL, *_path[] = {NULL};
	char *src_path = getenv("PATH");
	struct stat st;

	if (!src_path)
	{
		perror("there is an allocation pb");
		exit(EXIT_FAILURE);
	}
	_token = malloc(sizeof(char*) * strlen(src_path));
	strcpy(_token, src_path);


	if (_token != NULL)
		_token = strtok(src_path, ":");

	while (_token)
	{
		_path[0] = malloc(sizeof(_token) * strlen(src_path));
		if (!_path[0])
		{
			free(_path[0]);
			exit(EXIT_FAILURE);
		}
		_path[0] = strcpy(_path[0], _token);
		strcat(_path[0], "/");
		strcat(_path[0], tok_tab[0]);

		if (stat(_path[0], &st) == 0)
		{
			printf("%s\n", _path[0]);
			notfound = 1;
			return (_path[0]);
		}

		_token = strtok(NULL, ":");
		if (!_token)
		{
			perror("there is an allocation pb");
			free(_token);
                        exit(EXIT_FAILURE);
		}
	}
	if (notfound == 0)
		printf("NOT FOUND\n");
	
	f_execut(_path);

        return (0);
}
