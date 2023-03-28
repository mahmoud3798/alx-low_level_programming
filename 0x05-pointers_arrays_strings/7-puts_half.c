#include "main.h"

/**
* void puts_half - prints half of a string, followed by a new line.
* @str: char array
*/
void puts_half(char *str)
{
	int count, n, i;

	count = 0;
	while (str[count])
	{
		count++;
	}
	n = (count - 1) / 2
	for (i = 0; i <= n; i++)
		_putchar(str[i]);
	_putchar('\n');
}
