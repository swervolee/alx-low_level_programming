#include "main.h"
/**
 * *_print_rev_recursion - a function that prints a string in reverse
 *  *@s: the string input
 *   *return: nothing
 ******/




void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
