#include "lists.h"
/**
 *sum_dlistint - sums linked list's data
 *@head: the head f the linked list
 *Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h;
	int count = 0;


	if (head)
	{
		h = head;

		while (h->prev)
		{
			h = h->prev;
		}

		while (h)
		{
			count += h->n;
			h = h->next;
		}
	}

	return (count);
}
