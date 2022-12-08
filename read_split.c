#include "main.h"

/**
 * rn_split - a program that prints all the arguments
 * a function that splits a string and returns an array 
 * of each word of the string
 **/
char **rn_split(void)
{
	size_t len_str = 0, i = 0;
	char *_str = NULL;
	char *token, **tok_tab = NULL;

	while(1)
	{
		printf("$ ");

		if (getline(&_str, &len_str, stdin) == -1)
			exit(EXIT_FAILURE);

		token = malloc(sizeof(_str) *len_str);
		if (token != NULL)
		{
			token = strtok(_str, " ");
			while (token)
			{
				tok_tab = malloc(sizeof(token) * len_str);
				tok_tab[i] = token;
				i++;
				token = strtok(NULL, " ");
				if (token != NULL)
				{
					tok_tab[i] = token;
					printf("\n");
				}
			}
		}
		else
		{
			printf("Error allocation\n");
			exit(EXIT_FAILURE);
		}
		_which(tok_tab); /*Call of the function that build the commande path*/
	}
    free(tok_tab);
    free(token);
    return (tok_tab);
}
