#include "main.h"
/**
 *_strlen - the length of a string
 *@s: the string
 *Return: always 0
 */
int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		count += 1;
		i++;
	}
	return (count);
}
