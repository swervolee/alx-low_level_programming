#include "lists.h"

/**
 * pop_listint - Function that delets the head node of a list.
 * @head: Pointer to the head of a linked list.
 *
 * Return: The head's node data.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *current;

	if (!*head)
		return (0);
	current = *head;
	data = current->n;

	*head = current->next;
	free(current);

	return (data);
}
