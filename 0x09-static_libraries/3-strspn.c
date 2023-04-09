#include "main.h"

/**
 *_strspn - checks if the characters in accept are in the innitial segment of s
 *@s: the string
 *@accept: the characters
 *Return: 0 or 1
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, checker;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		checker = 0;

		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
			{
				checker = 1;
				break;
			}
		}

		if (checker == 0)
			break;
	}

	return (a);
}
