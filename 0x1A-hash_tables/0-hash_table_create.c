#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table
 *@size: the size of the hash table
 *Return: a hash table on success else NULL
 */


/*
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new = malloc(sizeof(hash_table_t));


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
*/



hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	table->array = array;
	table->size = size;

	return (table);
}
