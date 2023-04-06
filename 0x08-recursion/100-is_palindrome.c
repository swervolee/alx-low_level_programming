#include "main.h"

/**
 *str_len - returns the length of the string
 *@s: the string
 *Return: the length of the string;
 */
int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(s + 1));
}



/**
 *check_palindrome - checks whether a string is a palindrome
 *@start: the start point
 *@end: the end point
 *@s: the string
 *Return: 1 or 0
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_palindrome(s, start + 1, end - 1));
}


/**
 *is_palindrome - checks whether a string is a palindrome
 *@s: the string
 *Return: 1 or 0 depending on whether a string is a palindrome or not
 */
int is_palindrome(char *s)
{
	int len;

	len = str_len(s);
	if (len == 0 || len == 1)
		return (1);
	return (check_palindrome(s, 0, len - 1));
}
