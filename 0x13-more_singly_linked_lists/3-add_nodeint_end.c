#include "lists.h"

/**
 * add_nodeint_end - Function that adds a node at the end of a list.
 * @head: Pointer to the head of the linked list.
 * @n: The value to be added on the node.
 *
 * Return: Pointer to the new node added.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *endnode = malloc(sizeof(listint_t));

	if (!endnode)
		return (NULL);
	endnode->n = n;
	endnode->next = NULL;

	if (!*head)
		*head = endnode;
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current -> next = endnode;
	}
	return (endnode);
}
