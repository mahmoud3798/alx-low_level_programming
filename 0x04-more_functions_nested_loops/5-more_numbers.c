#include <stdio.h>
#include "main.h"
/**
* more_numbers - prints 10 times the numbers, from 0 to 14.
*/
void more_numbers(void)
{
	int c;
	int r;
	int x;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c <= 14; c++)
		{
			x = c;
			if (c > 9)
			{
				_putchar(1 + 48);
				x = c % 10;
			}
			_putchar(x + 48);
		}
		_putchar('\n');
	}
}
