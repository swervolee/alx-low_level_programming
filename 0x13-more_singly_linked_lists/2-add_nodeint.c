#include "lists.h"

/**
 * add_nodeint - Function that adds a new node to the linked list.
 * @head: Pointer to the head of the linked list.
 * @n: The data of the new node to be added.
 *
 * Return: A pointer to the new node added.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
