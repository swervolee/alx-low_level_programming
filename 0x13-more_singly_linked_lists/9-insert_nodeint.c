#include "lists.h"
/**
 * create_node - Function that creates a new node.
 * @n: The value to be put in the node.
 *
 * Return: Address of the new node.
 */

listint_t *create_node(int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	return (node);
}

/**
 * insert_nodeint_at_index - Function that inserts a node at a given position.
 * @head: Pointer to the head of the linked list.
 * @idx: The position at which to add the node.
 * @n: The value the node should have.
 *
 * Return: Address of the node added.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *newnode;
	unsigned int count = 0;

	if (idx == 0)
	{
		newnode = create_node(n);
		if (!newnode)
			return (NULL);
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	current = *head;

	while (current && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (!current || !current->next)
		return (NULL);
	newnode = create_node(n);
	if (!newnode)
		return (NULL);
	newnode->next = current->next;
	current->next = newnode;
	return (newnode);
}
