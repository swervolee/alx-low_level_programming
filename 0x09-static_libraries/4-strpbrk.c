#include "main.h"

/**
 *_strpbrk - searches for first occurence of accept in s
 *@s: the string
 *@accept: the character
 *Return: 1 if the character in s else 0
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{

		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}

	return ('\0');
}
