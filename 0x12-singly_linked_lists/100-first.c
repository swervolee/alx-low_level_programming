#include "lists.h"
/**
 *before_main - prints a messsage before execution of the main function
 */

void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
