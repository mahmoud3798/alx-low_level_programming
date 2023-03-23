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
double squareRoot(double a)
{
	double i = 0;
	double j = a / 2;

	while (j != i)
	{
		i = j;
		j = (a / i + i) / 2;
	}
	return (j);
}
long int maxPrimeFactors(long int n)
{
	long int maxPrime = -1;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n >>= 1;
	}
	while (n % 3 == 0)
	{
		maxPrime = 3;
		n = n / 3;
	}
	for (int i = 5; i <= squareRoot(n); i += 6)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
		while (n % (i + 2) == 0)
		{
			maxPrime = i + 2;
			n = n / (i + 2);
		}
	}
	if (n > 4)
		maxPrime = n;
	return (maxPrime);
}
int main(void)
{
	long int n = 612852475143;

	printf("%d", maxPrimeFactors(n));
	return (0);
}
