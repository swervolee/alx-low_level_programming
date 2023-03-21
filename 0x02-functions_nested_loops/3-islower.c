#include "main.h"
/**
 *_islower - if a letter is casefold
 *Return: 0
 */
int _islower(c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
