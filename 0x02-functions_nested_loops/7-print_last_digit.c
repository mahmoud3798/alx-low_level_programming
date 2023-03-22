#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: number which will print its last digit
 *
 * Return: digit
*/
int print_last_digit(int n)
{
	int digit;

	if (n >= 0)
		digit = n % 10;
	else
		digit = -1 * (n % 10);
	_putchar(digit + '0');
	return (digit);
}
