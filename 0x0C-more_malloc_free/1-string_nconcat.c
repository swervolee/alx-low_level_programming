#include "main.h"

/**
 *string_nconcat - concanetes strings
 *@s1: the first string
 *@s2: the second string
 *@n: number of bytes to take
 *Return: concanated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int concat_len = 0;
	unsigned int i, j;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	concat_len = s1_len + n;

	concatenated = malloc((concat_len + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < n; j++)
		concatenated[i + j] = s2[j];

	concatenated[concat_len] = '\0';

	return (concatenated);
}
