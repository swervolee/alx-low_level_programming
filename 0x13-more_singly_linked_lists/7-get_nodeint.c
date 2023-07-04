#include "lists.h"

/**
 * get_nodeint_at_index - Function that gets the nth position of a node.
 * @head: Pointer to th head of the node.
 * @index: The postion of the node to get.
 *
 * Return: Null if the node does not exist else return node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
