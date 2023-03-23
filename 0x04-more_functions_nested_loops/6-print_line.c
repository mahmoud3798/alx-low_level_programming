#include <stdio.h>
#include "main.h"
/**
* print_line - Write a function that draws a straight line in the terminal.
* @n: number of _ in line
*/
void print_line(int n)
{
	int l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= n; l++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
