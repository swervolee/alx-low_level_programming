#include "main.h"

/**
 * *_strdup - a function to duplicate an array
 *  *@str: the array to duplicate
 *   *Return: a pointer to the duplicate string
 */

char *_strdup(char *str)
{
	int i;
	char *new = NULL;

	if (!str)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	new = malloc((i + 1) * sizeof(char));
	new[i] = '\0';
	for (i = 0; str[i]; i++)
		new[i] = str[i];
	return (new);
}
