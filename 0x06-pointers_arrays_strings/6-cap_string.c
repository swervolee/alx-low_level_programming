#include "main.h"
/**
 *cap_string - capitalizing every word
 *@p: the character
 *Return: 0;
 */
char *cap_string(char *p)
{
	int i = 0;

	while (*(p + i) != '\0')
	{
		if (i == 0 ||
		    *(p + i - 1) == ' ' ||
		    *(p + i - 1) == '\t' ||
		    *(p + i - 1) == '\n' ||
		    *(p + i - 1) == ',' ||
		    *(p + i - 1) == ';' ||
		    *(p + i - 1) == '.' ||
		    *(p + i - 1) == '!' ||
		    *(p + i - 1) == '?' ||
		    *(p + i - 1) == '"' ||
		    *(p + i - 1) == '(' ||
		    *(p + i - 1) == ')' ||
		    *(p + i - 1) == '{' ||
		    *(p + i - 1) == '}')
		{
			if (*(p + i) >= 'a' && *(p + i) <= 'z')
			{
				*(p + i) -= ('a' - 'A');
			}
		}

		i++;
	}

	return (p);
}
