#include "lists.h"

/**
 *add_node_end - adds a node to the end of list_t linked list
 *@head: head of the linked list
 *@str: string to add to the node str element
 *Return: adress of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t)), *current;
	char *string = strdup(str);
	unsigned int i = 0;

	if (!new)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	new->str = string;
	new->len = i;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (*head);
	}
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = new;
	}

	return (*head);
}
