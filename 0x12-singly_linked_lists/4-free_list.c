#include "lists.h"

/**
 *free_list - frees memory allocated to a linked list
 *@head: pointer to the head of the linked list
 *Return: nothing
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next = NULL;

	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
