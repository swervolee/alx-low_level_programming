#include "main.h"
/**
 *_strstr - the func
 *@haystack: the source string
 *@needle: string to check out
 *Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;
		while (*haystack != '\0' && *b != 0 && *haystack == *b)
		{
			haystack++;
			b++;
		}
		if (!*b)
			return (a);
		haystack = a + 1;
	}
	return (0);
}
