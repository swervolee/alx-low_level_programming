#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *_atoi - the filter function
 *@s: the character
 *Return: 0
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	int digit;

	if (s[i + 1] = isdigit && s[i] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0' ; i++)
	{
		if (isdigit(s[i]))
		{
			digit = s[i] - '0';
			result = result * 10 + digit;
		}
	}
	return (sign * result);
}
