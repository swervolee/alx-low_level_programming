#include "main.h"
/**
 *string_toupper - transform to uppercase
 *@p: the char
 *Return: 0
 */
char *string_toupper(char *p)
{
	int i = 0;

	while (*(p + i) != '\0')
	{
		if (*(p + i) >= 'a' && *(p + i)  <= 'z')
		{
			*(p + i) = *(p + i) - ('a' - 'A');
		}
		i++;
	}
	return (p);
}
