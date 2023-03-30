#include "main.h"
/**
 *rot13 - cipher2
 *@s: character input
 *Return: 0
 */
char *rot13(char *s)
{
	int cnt = 0, i = 0;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char cipher[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + cnt) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + cnt) == alph[i])
			{
				*(s + cnt) = cipher[i];
				break;
			}
		}
		cnt++;
	}
	return (s);
}
