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

	while (count1 == 0)
	{
		if ((*(s1 + count) == '\0') && (*(s2 + count) == '\0'))
			break;
		count1 = *(s1 + count1) - *(s2 + count1);
		count1++;
	}
	return (count1);
}
