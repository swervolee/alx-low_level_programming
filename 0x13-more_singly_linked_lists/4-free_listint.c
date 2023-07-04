#include "lists.h"

/**
 * free_listint - Function that frees a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Void.
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
