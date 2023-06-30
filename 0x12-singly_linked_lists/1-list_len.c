#include "lists.h"

/**
 *list_len - counts the number of elements
 *@h: head of the struct
 *Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t i = 0;

	while (current)
	{
		i++;
		current = current->next;
	}
	return (i);
}
