#include "main.h"
/**
 *_strchr - the function
 *@s: the string
 *@c: the character to be searched
 *Return: 0
 */
char *_strchr(char *s, char c)
{
	int i = 0, a = 0;

	while (*(s + a) != '\0')
		i++;

	for (a = 0; a <= i; a++)
	{
		if (*(a + s) == c)
			_putchar(*(a + s));
		
	}
	return (0);
}
