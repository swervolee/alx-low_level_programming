#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - concanates two strings
 *@s1: the first string
 *@s2: the second string
 *@n: the number of bytes to take from s2
 *Return: a pointer to the concanated strings else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, m = 0;
	char *str;

	if (!s1)
		s1 = " ";
	if (!s2)
		s2 = " ";
	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0' && j < n)
		j++;
	str = malloc((j + i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (m < i)
	{
		*(str + m) = *(s1 + m);
		m++;
	}
	while (m < i + j)
	{
		*(str + m) = *(s2 + m - i);
		m++;
	}
	*(str + m) = '\0';
	return (str);
}
