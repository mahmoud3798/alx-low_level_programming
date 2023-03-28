#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Return: always 0
*/

int main(void)
{
	int s;
	char c;

	srand(time(NULL));
	while (s <= 2645)
	{
		c = rand() % 128;
		s += c;
		putchar(c);
	}
	putchar(2772 - s);
	return (0);
}
