#include "main.h"

/**
 * pal_check - a helper function to check for palindrome
 * @s: the input string
 * @start: the starting index
 * @end: the ending index
 * Return: 1 if palindrome, else 0
 */
int pal_check(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (pal_check(s, start + 1, end - 1));
}

/**
 * is_palindrome - determines if a string is palindrome or not
 * @s: the input string
 * Return: 1 if palindrome, else 0
 */
int is_palindrome(char *s)
{
	int start = 0;
	int end = 0;

	while (s[end])
		end++;
	if (end <= 1)
		return (1);
	end--;
	return (pal_check(s, start, end));
}
