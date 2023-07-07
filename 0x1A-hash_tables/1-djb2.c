#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_djb2 - function implementing the djb2 algorithm.
 * @str: string
 *
 * Return: int
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int i;
	int ch;

	i = 5381;
	while ((ch = *str++))
	{
		i = ((i << 5) + i) + ch;
	}
	return (i);
}
