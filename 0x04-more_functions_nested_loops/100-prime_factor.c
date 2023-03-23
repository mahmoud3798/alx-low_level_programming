#include <stdio.h>
#include "main.h"
# include <math.h>

/**
* main - Entry point.
* Description: Write a program that finds and prints the largest prime factor
*	of the number 612852475143, followed by a new line.
* maxPrimeFactors: find max prime factor
* squareRoot: function to calc square root
* Return: always 0
* @n: number to get its prime factors
* @a: number to calc its square root
*/

float squareRoot(float a)
{
	float i = 0;
	float j = a / 2;

	while (j != i)
	{
		i = j;
		j = (a / i + i) / 2;
	}
	return (j);
}
void maxPrimeFactors(long int n)
{
	long int maxPrime;
	int i;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n = n / 2;
	}
	for (i = 3; i <= squareRoot(n); i += 2)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
	}
	if (n > 2)
		maxPrime = n;
	printf("%d\n", maxPrime);
}
int main(void)
{
	long int n = 612852475143;

	maxPrimeFactors(n);
	return (0);
}
