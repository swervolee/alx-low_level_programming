#include "main.c"
/**
 *string_toupper - transform to uppercase
 *@char: the char
 */
char *string_toupper(char *p)
{
	int i = 0;

	while (*(p + i) != '\n')
	{
		if (*(p + i) >= 'a' && *(p + i)  <= 'z')
		{
			*(p + i) = *(p + i) - ('a' - 'A');
		}
		i++;
	}
	return (p);
}
