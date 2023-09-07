#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table
 *@size: the size of the hash table
 *Return: a hash table on success else NULL
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new;


	new = malloc(sizeof(hash_table_t));


	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->size = size;
	new->array = malloc(size * sizeof(hash_node_t *));

	if (new->array == NULL)
	{
		free(new->array);
		free(new);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new->array[i] = NULL;
	}


	return (new);
}
