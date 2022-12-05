#include "main.h"

/**
 * _promtp
 *
 *
 */
int main(void)
{
	while (1)
	{
		size_t len_str = 0;
		char *_str = NULL;
		char *token;

		print_str("prompt: ");
		if (getline(&_str, &len_str, stdin) == -1)
			exit(EXIT_FAILURE);

		token = malloc(sizeof(_str) * len_str);
		if (token != NULL)
		{
			token = strtok(_str, " ");
			print_str(token);

			while(token)
			{
				token = strtok(NULL, " ");
				if (token != NULL)
					print_str(token);
			}
		}
		free(token);
	}
	return (0);
}
