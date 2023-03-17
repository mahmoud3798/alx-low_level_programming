#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program to print alphabet
 *
 * Return: always 0
*/
int main(void)
{
	char c;

	for (c = 'a', c <= 'z', c++)
		putchar(c);
	putchar("\n");
	return (0);
}
