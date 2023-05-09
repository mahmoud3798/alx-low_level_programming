#include "main.h"
/**
* clear_bit - function that sets the value of a bit to 0 at a given index.
* @n: long int
* @index: int
* Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux =  ~(1 << index), m;

	m = (sizeof((*n)) * 8);
	if (index > m)
		return (-1);

	*n = *n & aux;
	return (1);
}
