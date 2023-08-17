#include "lists.h"

/**
 *dlistint_len - finds the length of a linked list
 *@h: head of the linked list
 *Return: the length of the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len;


	len = 0;

	if (h->prev != NULL)
	{
		while (h->prev != NULL)
		{
			h = h->prev;
		}
	}

	if (h == NULL)
	{
		return (len);
	}

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
