#include "lists.h"

/**
 *print_list - prints the contents of a linked list
 *@h: pointer to the head of a linked
 *Return: the number of elements in the list
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t i = 0;



	while (current != NULL)
	{
		if (!current->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		i++;
		current = current->next;
	}
	return (i);
}
