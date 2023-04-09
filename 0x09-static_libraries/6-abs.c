#include "main.h"

/**
 *_abs - this functions gets the absolute value
 *@n: the value
 *Return the absolute value
 */

int _abs(int n)
{
	if (n > 0)
		return (n);

	else if (n == 0)
		return (0);

	else
		return (-n);
}
