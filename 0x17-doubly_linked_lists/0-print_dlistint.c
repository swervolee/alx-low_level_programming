#include "lists.h"

/**
 *print_dlistint - prints elements of a linked list
 *@h: the head of the linked list
 *Return: length of the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len;


	len = 0;

	if (!h)
	{
		return (len);
	}

	if (h->prev != NULL)
	{
		while (h->prev != NULL)
		{
			h = h->prev;
		}
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}

	return (len);
}
