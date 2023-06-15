#include "main.h"
/**
 *_strspn - the func name
 *@s: the character
 *@accept: the set
 *Return: the length of char
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
