#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the table
 *
 * Return: pointer to the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;

	if (!size)
		return (NULL);
	ptr = malloc(sizeof(hash_table_t));
	if (!ptr)
		return (NULL);
	ptr->size = size;
	ptr->array = malloc(sizeof(hash_node_t *) * size);
	if (!ptr->array)
		return (NULL);
	while (size--)
		ptr->array[size] = NULL;
	return (ptr);
}
