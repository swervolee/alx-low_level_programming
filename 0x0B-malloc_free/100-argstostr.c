#include "main.h"

/**
 * *argstostr - concatenates all arguements
 *  *@ac: the arguement count
 *   *@av: the arguement vector
 *    *Return: a pointer to the concatenated arguements
 */

char *argstostr(int ac, char **av)
{
	int i, j, length = 0, itr = 0;
	char *array = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}

	array = malloc((length + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, itr++)
			array[itr] = av[i][j];
		array[itr] = '\n';
		itr++;
	}

	array[length] = '\0';
	return (array);
}
