#include "lists.h"

/**
 * listint_len - Functions that returns the number of nodes present.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current)
	{
		if (current->n)
			count++;
		current = current->next;
	}
	return (count);
}
