#include "main.h"
/**
 *_isupper - checks if a character is upper case or not
 *@c: the character
 *Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
