#include "main.h"
#include <stdlib.h>

/**
 *_strdup - a functio to copy a string using malloc
 *@str: the string to copy from
 *Return:null or a pointer to a newly allocated string
 */

char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *m;

	if  (str == NULL)
		return (NULL);
	while (*(str + i) != '\0')
		i++;

	m = malloc((i * sizeof(char)) + 1);

	if (!str)
	{
		while (j < i)
		{
			*(m + j) = *(str + j);
			j++;
		}
	}

	return (m);
}
