#include "main.h"
/**
 *leet - cipher
 *@p: text
 *Return: 0
 */
char *leet(char *p)
{
	int upper[] = {65, 69, 79, 84, 76};
	int lower[] = {97, 101, 111, 116, 108};
	int i = 0, j = 0;
	int cipher[] = {52, 51, 48, 55, 49};

	while (*(p + j) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(p + j) == lower[i] || *(p + j) == upper[i])
			{
				*(p + j) = cipher[i];
				break;
			}
		}
		j++;
	}
	return (p);
}
