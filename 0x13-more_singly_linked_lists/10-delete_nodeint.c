#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes a node at index position.
 * @head: Pointer to the head of the linked list.
 * @index: The position at which to delete the node.
 *
 * Return: 1 upon success and -1 upon failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp;
	listint_t *current, *previous = NULL;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;
	previous = NULL;
	while (current != NULL && count < index)
	{
		previous = current;
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		return (-1);
	}
	previous->next = current->next;
	free(current);
	return (1);
}
