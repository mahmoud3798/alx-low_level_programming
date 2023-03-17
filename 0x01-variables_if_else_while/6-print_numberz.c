#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Program to print numbers from 0 to 9 using putchar
 *
 * Return: always 0
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
