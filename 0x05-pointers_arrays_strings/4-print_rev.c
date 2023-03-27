#include "main.h"

/**
* print_rev - function that prints a string,
*	in reverse, followed by a new line.
* @s: string variable
*/
void print_rev(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
