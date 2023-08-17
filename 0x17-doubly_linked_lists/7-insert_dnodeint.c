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
    dlistint_t *h, *new = NULL;
    unsigned int i = 1;

    h = *H;
    if (idx == 0)
    {
        new = add_dnodeint(H, n);
    }
    else
    {
        if (h)
        {
            while (h->prev != NULL)
                h = h->prev;
            while (h != NULL && i < idx)
            {
                h = h->next;
		i++;
            }
                if (h->next == NULL)
                    new = add_dnodeint_end(H, n);
                else
                {
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			if (new)
			{
				new->n = n;
				new->next = h->next;
				new->prev = h;
				h->next->prev = new;
				h->next = new;
			}
		}
        }
    }
    return (new);
}
