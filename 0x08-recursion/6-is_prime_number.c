#include "main.h"

/**
 *check_prime - a helper function to determine a prime number
 *@n: the input number
 *@half: input number divided by two
 *Return: 0 if the number is not prime else 0
 */

int check_prime(int n, int half)
{
	if (half == 1)
		return (1);
	else if (n % half == 0)
		return (0);
	return (check_prime(n, half - 1));
}



/**
 *is_prime_number - determines if a number is prime
 *@n: the input number
 *Return: 1 if prime else 0
 */

int is_prime_number(int n)
{

	int half = n / 2;

	if (n <= 1)
		return (0);


	if (n % 2 == 0)
		return (0);
	return (check_prime(n, half));
}
