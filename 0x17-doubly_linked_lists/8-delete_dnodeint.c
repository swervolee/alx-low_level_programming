#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes a node
 *@head: head of the linked list
 *@index: the node index to delete
 *Return: 1 on success else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h, *trace;
	unsigned int i;

	h = *head;
	trace = NULL;

	if (h)
	{
		while (h->prev)
			h = h->prev;
	}

	if (index == 0)
	{
		if (h != NULL)
			*head = h->next;
		if (*head)
			(*head)->prev = NULL;
		free(h);
		return (1);
	}

	i = 1;

	while (h)
	{
		if (i == index)
		{
			trace->next = h->next;
			if (h->next)
				h->next->prev = trace;
			free(h);
			return (1);
		}

		trace = h;
		h = h->next;
		i++;
	}
	return (-1);
}
