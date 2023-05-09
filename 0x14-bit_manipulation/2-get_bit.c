#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: long int .
 * @index: int .
 * Return: result or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	x = (sizeof(n) * 8);
	if (index > x)
		return (-1);

	n = n >> index;
	return (n & 1);
}
