#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *str_concat - concanates two strings
 *@s1: the first string
 *@s2: the second string
 *Return: a pointer to the concanated strings
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, n = 0, m = 0;
	char *cnt;

	if (!s1 && !s2)
	{
		s1 = "";
		s2 = "";
	}
	if (!s2)
		s2 = "";
	if (!s1)
		s1 = "";
	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0')
		j++;

	cnt = malloc((j + i + 1) * sizeof(char));

	if (cnt == NULL)
		return (NULL);
	if (cnt != NULL)
	{
		while  (n < i)
		{
			*(cnt + n) = *(s1 + n);
			n++;
		}
		while (m < j)
		{
			*(cnt + n + m) = *(s2 + m);
			m++;
		}

	}

	*(cnt + n + m) = '\0';

	return (cnt);
}
