#include  "main.h"

/**
 *_strchr - searches for a string
 *@s: the string
 *@c: the character to be searched
 *Return: the character if found and null if not
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		if (*(s + a) == c)
			return (s + a);
	}

	return ('\0');
}
