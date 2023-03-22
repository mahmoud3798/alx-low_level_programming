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
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
