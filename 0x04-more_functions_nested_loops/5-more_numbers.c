#include <stdio.h>
#include "main.h"
/**
* more_numbers - prints 10 times the numbers, from 0 to 14.
*/
void more_numbers(void)
{
	int c;
	int r;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c <= 14; c++)
			_putchar(c + 48);
	}
	_putchar('\n');
}
