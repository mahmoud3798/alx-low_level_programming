#include <stdio.h>
#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 *
 * @n: number to compute its absolute
 *
 * Return: n
*/
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
