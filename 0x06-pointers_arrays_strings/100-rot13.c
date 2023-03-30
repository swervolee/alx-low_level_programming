#include "main.h"
/**
 *rot13 - cipher2
 *@s: character input
 *Return: nul
 */
char *rot13(char *s)
{
	int cnt = 0, i = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char cipher[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + cnt) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + cnt) == alpha[i])
			{
				*(s + cnt) = cipher[i];
			}
		}
		cnt++;
	}
	return (s);
}
