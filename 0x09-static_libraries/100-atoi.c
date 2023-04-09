#include "main.h"

#include <stdio.h>

#include <ctype.h>

/**
 *_atoi - a function to filter numbers
 *@s: the string to be filtered
 *Return: a positive or negative number
 */

int _atoi(char *s)
{
	int result = 0, sign = 1, i = 0, digit;

	if (isdigit(*(s  + i + 1)) && (*(s + i) == '-'))
	{
		sign = -1;
		i++;
	}

	else if (*s == 0)
		sign = -1;

	for (; *(s + i) != '\0'; i++)
	{
		if (isdigit(*(s + i)))
		{
			digit = s[i] - 48;
			result = result * 10 + digit;
		}
	}

	return (sign * result);
}
