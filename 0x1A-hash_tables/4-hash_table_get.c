#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hast table
 * @key: char
 *
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind = 0;
	hash_node_t *chk = NULL;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	ind = key_index((const unsigned char *)key, ht->size);

	chk = ht->array[ind];
	while (chk)
	{
		if (!strcmp(key, chk->key))
			return (chk->value);
		chk = chk->next;
	}
	return (NULL);
}
