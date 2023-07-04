#include "lists.h"

/**
 * sum_listint - Function that returns sum of all the data in the list.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of the values in the linked list.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
