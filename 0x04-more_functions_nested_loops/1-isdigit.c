#include "main.h"
/**
 *_isdigit - finds if a character is a number
 *@c: the character
 *Return: 0
 */
int _isdigit(int c)
{
	if ((c) >= '0' && (c) <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
