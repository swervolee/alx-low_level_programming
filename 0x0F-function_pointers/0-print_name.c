#include "function_pointers.h"
/**
 *print_name - a function to print a name
 *@name:the name
 *@f: the function pointer
 *Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
