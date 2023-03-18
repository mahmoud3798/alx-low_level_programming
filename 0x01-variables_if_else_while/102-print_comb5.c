#include <stdio.h>
/**
* main - Entry point
*
* Description: prints all possible combinations of two two-digit numbers.
*
* Return: Always 0
*/
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = n; m < 10; m++)
		{
			putchar(n + '0');
			putchar(n + '0');
			putchar(' ');
			putchar(n + '0');
			putchar(m + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
