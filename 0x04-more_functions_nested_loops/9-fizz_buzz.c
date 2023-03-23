#include <stdio.h>
#include "main.h"
/**
* main - Entry point.
* Description:Write a program that prints the numbers from 1 to 100,
*	followed by a new line.
*	But for multiples of three print Fizz instead of the number
*	and for the multiples of five print Buzz.
*	For numbers which are multiples of both three and five print FizzBuzz.
* Return: always 0
*/
int main(void)
{
	int r;

	for (r = 1; r <= 100; r++)
	{
		if (r % 3 == 0 && r % 5 == 0)
			printf("FizzBuzz ");
		else if (r % 3 == 0)
			printf("Fizz ");
		else if (r % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", r);
	}
	return (0);
}
