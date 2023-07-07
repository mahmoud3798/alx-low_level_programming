#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: string
 * @size: the size of the array
 *
 * Return: key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int k;

	k = hash_djb2(key) % size;
	return (k);
}
