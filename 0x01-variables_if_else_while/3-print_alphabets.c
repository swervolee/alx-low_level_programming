#include <stdio.h>
/**
 *main - entry point
 *Return:0
 */

int main(void)
{
	char letter = 'a';
	char letter2 = 'A';

	while (letter <= 'z' && letter2 <= 'Z')
	{
		putchar(letter);
		putchar(letter2);
		letter2++;
		letter++;
	}
	putchar('\n');
	return (0);
}
