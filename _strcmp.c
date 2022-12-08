#include "main.h"
/**
 *_strcmp - function that compare two strings
 *@s1: first comparison
 *@s2:second comparison
 *Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int len = 0, n;

	while (s1[len] != '\0' && s2[len] != '\0')
	{
		if (s1[len] != s2[len])
		{
			n = s1[len] - s2[len];
			return (n);
		}
		len++;
	}
	return (0);
}
