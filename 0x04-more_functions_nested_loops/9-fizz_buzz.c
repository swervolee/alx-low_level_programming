#include <stdio>
/**
 *main - entry point
 *Return: 0
 */
int main(void)
{
	int i = 0;

	while (i <= 100)
	{
		if (n % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", n);
		}
		n++;
	}
	printf("Buzz\n");
	return (0);
}
