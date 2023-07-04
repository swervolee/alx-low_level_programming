#include "lists.h"

/**
 * free_listint2 - Function that frees a linked list and sets head to NULL.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Void.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
