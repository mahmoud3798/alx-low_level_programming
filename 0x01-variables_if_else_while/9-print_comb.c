#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program to print numbers from 0 to 9 followed by ,
 *
 * Return: always 0
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
			break;
	}
	putchar('\n');
	return (0);
}
