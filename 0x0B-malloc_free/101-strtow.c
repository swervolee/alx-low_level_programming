#include "main.h"
#include <stdlib.h>

/**
*word_no - counts the number of word
*@string: the string
*Return: number of words
*/

int word_no(char *string)
{

	int words, a, b;

	a = 0;
	words = 0;

	for (b = 0; string[b] != '\0'; b++)
	{
		if (string[b] == ' ')
			a =  0;
		else if (a == 0)
		{
			a = 1;
			words++;
		}
	}
	return (words);
}

/**
 *strtow - turns a string into words
 *@str: the string
 *Return: A pointer to the splitted strings
 */

char **strtow(char *str)
{
	char **dp, *tmp;
	int slen = 0, word, i = 0, count = 0, start, end, o = 0;

	while (str[slen])
		slen++;
	word = word_no(str);
	if (word == 0)
		return (NULL);
	dp = malloc((word + 1) * sizeof(char));
	if (!dp)
		return (NULL);
	for (i = 0; i <= slen; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (count)
			{
				end = i;
				tmp = malloc((count + 1) * sizeof(char));
				if (!tmp)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				dp[o] = tmp - count;
				o++;
				count = 0;
			}
		}
		else if (count++ == 0)
			start = i;
	}
	dp[o] = NULL;
	return (dp);
}
