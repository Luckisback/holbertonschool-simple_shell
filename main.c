#include "main.h"

/**
 * _promtp
 *
 *
 */
void _prompt(void)
{
	while (1)
	{
		size_t len_str = 0;
		char *_str = NULL;

		print_str("prompt: ");
		if (getline(&_str, &len_str, stdin) == -1)
			exit(EXIT_FAILURE);
		_token(_str);
	}
}
int _token(char *_str)
{
	size_t len_str = 0;
	char *token;

	{
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

int sh_exec(char **argv)
{
	pid_t pid;
	int status;

	pid = fork();
	if (!pid)
	{
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error:");
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
		perror("pid < 0");
	wait(&status);
	return (1);
}

int main(int argc, char **argv)
{
	(void)argc;
	sh_exec(argv);
	return (0);
}
