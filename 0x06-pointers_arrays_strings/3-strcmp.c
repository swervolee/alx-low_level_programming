#include "main.h"
/**
 *_strcmp - string compares
 *@s1: first string
 *@s2: second string
 *Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0, count1 = 0;

	while (*(s1 + count) != '\0')
		count++;
	while (*(s2 + count1) != '\0')
		count1++;
	if (count == count1)
		return (0);
	else if (count < count1)
		return (-15);
	else
		return (15);
}
