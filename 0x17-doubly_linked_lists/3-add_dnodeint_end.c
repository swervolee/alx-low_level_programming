#include "lists.h"

/**
 *add_dnodeint_end - at a node at the end
 *@head: the head of the linked list
 *@n: the  data
 *Return: pointer to the new data
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new,  *h;


	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}

	new->next = NULL;
	new->n = n;

	h = *head;

	if (h != NULL)
	{
		while (h->next)
		{
			h = h->next;
		}
	}

	new->prev = h;

	if (h)
	{
		h->next = new;
	}

	*head = new;

	return (new);
}
