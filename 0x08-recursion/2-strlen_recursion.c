#include "main.h"

/**
 * *_strlen_recursion - a function that finds the length of a string
 *  *@s: the string input
 *   *Return: nothing
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
