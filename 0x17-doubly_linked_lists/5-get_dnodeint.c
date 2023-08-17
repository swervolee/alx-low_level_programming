#include "lists.h"

/**
 *get_dnodeint_at_index - fetches a node at given index
 *@head: the head of the linked list
 *@index: the index
 *Return: node at index else NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *h;

	if (head)
	{
		h = head;

		while (h->prev)
		{
			h = h->prev;
		}

		i = 0;
		while (h != NULL)
		{
			if (i == index)
			{
				return (h);
			}
			i++;
			h = h->next;
		}

	}
	return (NULL);
}
