#include <stdio.h>

/**
* squareNum - function to calc square root
* @a: number to calc its square root
* Return: Result
*/

double sqrtNum(double a)
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

/**
* maxPrimeFactors - find max prime factor
* @n: number to get its prime factors
*/
void maxPrimeFactors(long int n)
{
	int max;
	int i;

	while (n % 2 == 0)
		n = n / 2;

	for (i = 3; i <= sqrtNum(n); i = i + 2)
	{
		while (n % i == 0)
		{
			n = n / i;
			max = i;
		}
	}
	if (n > 2)
		max = n;
	printf("%d\n", max);
}

/**
* main - Entry point.
* Description: Write a program that finds and prints the largest prime factor
*       of the number 612852475143, followed by a new line.
* Return: always 0
*/
int main(void)
{
	int n = 612852475143;

	maxPrimeFactors(n);

	return (0);
}
