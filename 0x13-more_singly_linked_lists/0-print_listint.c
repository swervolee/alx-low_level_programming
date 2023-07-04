#include "lists.h"

/**
 * print_listint - Function that prints all the element of a list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
