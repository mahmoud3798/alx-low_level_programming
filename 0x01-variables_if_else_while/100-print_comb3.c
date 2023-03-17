#include <stdio.h>
/**
* main - Entry Point
*
* Description:  prints all possible different combinations of two digits
*
* Return: Always 0
*/
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (n < m && n != m)
			{
				putchar(n + '0');
				putchar(m + '0');
				if (n + m != 17)
				{
					putchar(',');
					putchar(' ');
				}
				else
					break;
			}
		}
	}
	putchar('\n');
	return (0);
}
