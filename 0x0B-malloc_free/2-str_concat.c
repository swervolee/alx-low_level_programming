#include "main.h"
/**
 * *str_concat - concatenates two strings
 *  *@s1: the first string
 *   *@s2: the second tring
 *    *Return: a pointer to the concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, sum = 0, counter = 0;
	char *new;

	if (!s1 && s2)
		return (s2);
	if (!s2 && s1)
		return (s1);
	if (!s1 && !s2)
		return (NULL);

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	sum = i + j;
	new = malloc(sum * sizeof(char));
	if (!new)
		return (NULL);

	for (counter =  0; counter < sum; counter++)
	{
		if (counter < i)
			new[counter] = s1[counter];
		else
			new[counter] = s2[counter - i];
	}

	new[sum] = '\0';
	return (new);
}
