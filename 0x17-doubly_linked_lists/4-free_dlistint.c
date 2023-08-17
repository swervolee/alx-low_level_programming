#include "lists.h"

/**
 *free_dlistint - frees a linked list
 *@head: the head of the linked list
 *Return: nothing
 */

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
