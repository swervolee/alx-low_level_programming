#include "main.h"
/**
 *_islower - if a letter is casefold
 *@c: parameter
 *Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
