#include "main.h"

/**
 *_isalpha - checks if a character is alphabetical
 *@c: the character
 *Return: 1 if the character is alphabetical else 0
 */

int _isalpha(int c)
{
	return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}
