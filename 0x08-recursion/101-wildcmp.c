#include "main.h"
/**
 *compare - compares two strings
 *@str1: first string
 *@str2: second string
 *Return: 0 or 1;
 */
int compare(char *str1, char *str2)
{
	if (*str1 == '\0' && *str2 == '\0')
		return (1);
	if (*str1 == '\0' && *str2 == '*')
		return (compare(str1, str2 + 1));
	else if (*str1 == '\0' && *str2 != '\0')
		return (0);
	if (*str1 == *str2)
		return (compare(str1 + 1, str2 + 1));
}

/**
 *wildcmp - main function
 *@s1: the first string
 *@s2: the second string
 *Return: 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (compare(s1, s2 + 1));
	else
		return (0);
}
