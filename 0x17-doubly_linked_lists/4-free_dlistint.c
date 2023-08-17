#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *h, *next;

	if (head)
	{
		h = head;

		while (h->prev)
		{
			h = h->prev;
		}

		while (next)
		{
			next = h->next;
			free(h);
			h = next;
		}
	}
}
