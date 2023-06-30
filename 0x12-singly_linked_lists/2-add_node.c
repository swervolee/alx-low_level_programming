#include "lists.h"

/**
 *add_node - adds a new node at the beginning of a list
 *@head: the head of the node
 *@str: string to add to the new_node str
 *Return: the adress of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	unsigned int i = 0;
	char *string = strdup(str);

	if (!string)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(string);
		return (NULL);
	}

	for (i = 0; string[i]; i++)
		;

	new->str = string;
	new->len = i;
	new->next = *head;

	*head = new;

	return (*head);
}
