#include <stdio.h>
#include "variadic_functions.h"
/**
* main -Entry Point
*
* Description: prints _putchar, followed by a new line.
*
* Return: always 0
*/
int main(void)
{
	int c;
	char word[] = "_putchar";

	for (c = 0; c < 8; c++)
		_putchar(word[c]);
	_putchar('\n');
	return (0);
}
