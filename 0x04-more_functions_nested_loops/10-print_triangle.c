#include <stdio.h>
#include "main.h"
/**
* print_triangle - function that prints a triangle, followed by a new line.
* @size:  is the size of the triangle
*/
void print_triangle(int size)
{
	int r;
	int c;
	int s;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (c = 0; c <= size - r - 1; c++)
				_putchar(' ');
			for (s = c + 1; s <= size; s++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
