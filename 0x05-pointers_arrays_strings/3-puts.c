#include "main.h"

/**
* _puts - function that prints a string,
*	followed by a new line, to stdout.
* @str: string variable
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 48);
		str++;
	}
	_putchar('\n');
}
