#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_print - function that prints a hash table.
* @ht: hash table
*
* Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned int ind = 0;
	char *s = "";

	if (!ht)
		return;
	putchar('{');

	while (ind < ht->size)
	{
		tmp = ht->array[ind];
		if (tmp)
			printf("%s", s);
		while (tmp)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (tmp->next)
				printf("%s", s);
			tmp = tmp->next;
			s = ", ";
		}
		ind++;
	}
	putchar('}');
	putchar('\n');
}
