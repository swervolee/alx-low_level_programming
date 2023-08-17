#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a node at a given index
 *@H: the head of the linked list
 *@idx: the index of the node
 *@n: the data
 *Return: the position of the index
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **H, unsigned int idx, int n)
{
	dlistint_t *h, *new;
	unsigned int i;


	if (idx == 0)
	{
		add_dnodeint(H, n);
	}
	else
	{
		if (*H)
		{
			h = *H;
			while (h->prev)
				h = h->prev;
			i = 0;
			while (h != NULL)
			{
				if (i == idx)
					break;
				i++;
				h = h->next;
			}
			if (i != idx)
				return (NULL);
			if (h->next == NULL)
			{
				new = add_dnodeint_end(H, n);
			}
			else
			{
				new = malloc(sizeof(dlistint_t));
				if (!new)
				{
					free(new);
					return (NULL);
				}
				new->n = n;
				new->next = h->next;
				new->prev = h;
				h->next->prev = new;
				h->next = new;
			}
		}
	}
	return (new);
}
