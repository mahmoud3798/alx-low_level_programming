#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @key: key
 * @value: value of the node
 * @ht: hash table
 *
 * Return: 1 Or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind = 0;
	hash_node_t *chk = NULL;
	hash_node_t *n = NULL;


	if (!ht || !key || !(*key) || !strcmp(key, "") || !value)
		return (0);

	ind = key_index((unsigned char *)key, ht->size);
	chk = ht->array[ind];

	while (chk)
	{
		if (!strcmp(key, chk->key))
	{
			free(chk->value);
			chk->value = strdup(value);
			if (chk->value)
				return (1);
			return (0);
		}
		chk = chk->next;
	}

	n = malloc(sizeof(hash_node_t));
	if (!n)
		return (0);

	n->key = strdup(key);
	n->value = strdup(value);

	n->next = ht->array[ind];
	ht->array[ind] = n;
	return (1);
}
