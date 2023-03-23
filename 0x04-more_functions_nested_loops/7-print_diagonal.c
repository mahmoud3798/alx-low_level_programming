#include <stdio.h>
#include "main.h"
/**
* print_diagonal - function that draws a diagonal line on the terminal.
* @n: is the number of times the character \ should be printed.
*/
void print_diagonal(int n)
{
	int r;
	int c;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (r = 1; r <= n; r++)
		{
			for (c = 1; c <= r; c++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
	}
}
