#include "main.h"
#include <stdlib.h>
/**
 *argstostr - concanates all arguements
 *@ac: the number of arguements
 *@av: an array of the arguemnts
 *Return: a concatenation of the arguements
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	len++;

	str = malloc(len * sizeof(char));

	if (!str)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}