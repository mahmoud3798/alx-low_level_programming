#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_delete-function that deletes a hash table.
* @ht: hash table
*
* Return: void
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	hash_node_t *hdtmp;
	unsigned int ind = 0;

	if (!ht)
		return;
	while (ind < ht->size)
	{
		hdTmp = ht->array[ind];
		while (hdTmp)
		{
			tmp = hdTmp->next;
			free(hdTmp->key);
			free(hdTmp->value);
			free(hdTmp);
			hdTmp = tmp;
		}

		ind++;
	}
	free(ht->array);
	free(ht);
}
