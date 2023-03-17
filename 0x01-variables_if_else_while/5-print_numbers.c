#include <stdio.h)
/**
 * main - Entry point
 *
 * Description: Program to print numbers from 0 to 9
 *
 * Return: always 0
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	putchar('\n');
	return (0);
}
