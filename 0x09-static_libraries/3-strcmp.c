#include "main.h"

/**
 *_strcmp - compares a string
 *@s1: the first string
 *@s2: the second string
 *Return: 0 if the strings are the same else positive or negative
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i))
	{
		if (*(s1 + i) == '\0')
			return (0);

		i++;
	}

	return (*(s1 + i) - *(s2 + i));
}
