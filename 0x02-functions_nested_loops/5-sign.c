#include <stdio.h>
#include "main.h"
/**
 * print_sign - function that prints the sign of a number.
 *
 * @n: number to check
 *
 * Return: 1 if positive, 0 is zero, or -1 is negative
*/
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
