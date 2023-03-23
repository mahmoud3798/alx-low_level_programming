#include <stdio.h>
#include "main.h"
/**
* print_square - function that prints a square, followed by a new line.
* @size:  is the size of the square
*/
void print_square(int size)
{
	int r;
	int c;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (r = 1; r <= n; r++)
		{
			for (c = 1; c <= n; c++)
				_putchar('#');
				_putchar('\n');
		}
	}
}
