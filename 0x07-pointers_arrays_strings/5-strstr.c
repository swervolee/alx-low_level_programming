#include "main.h"
/**
 *_strstr - the func
 *@haystack: the source string
 *@needle: string to check out
 *Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (*(haystack + a) == *(needle + b))
			{
				return (needle);
			}
		}
	}
	return ('\0');
}
