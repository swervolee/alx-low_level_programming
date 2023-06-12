#include "main.h"

/**
 *count_words - a function to count words
 *@str: the string input
 *Return: the number of words
 */
int count_words(char *str)
{
	int count = 0, is_word = 0;

	while (*str)
	{
		if (*str != ' ' && !is_word)
			count++, is_word = 1;
		else if (*str == ' ')
			is_word = 0;
		str++;
	}
	return (count);
}

/**
 *strtow - a function to seperate string into words
 *@str: the string imput
 *Return: a pointer to an array of words
 */

char **strtow(char *str)
{
	int i, j, word_count, word_length;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str == ' ')
			str++;
		word_length = 0;
		while (str[word_length] != ' ' && str[word_length] != '\0')
			word_length++;
		words[i] = malloc((word_length + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < word_length; j++)
			words[i][j] = str[j];
		words[i][word_length] = '\0';
		str += word_length;
		i++;
	}
	words[word_count] = NULL;
	return (words);
}
