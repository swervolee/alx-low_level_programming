#include "main.h"
/**
 *_strchr - the function
 *@s: the string
 *@c: the character to be searched
 *Return: 0
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		if (*(s + a) == c)
		{
			return (s + a);
		}
	}
	if (*(s + a) == c)
		return (s + i);
	return ('\0');
}
