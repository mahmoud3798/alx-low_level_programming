#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program to print hexadecimal numbers
 *
 * Return: always 0
*/
int main(void)
{
	int n;
	char c;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	for (c = 'a'; c < 'j'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
