#include "main.h"
int prime(int x, int y);
/**
* is_prime_number - function that returns 1 if the input
*	integer is a prime number, otherwise return 0.
* @n: int variable
* Return: 1 if n is prime otherwise return 0
*/
int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
* prime - check if number is prime or not
* @x: int variable
* @y: int variable
* Return: 0 or 1
*/
int prime(int x, int y)
{
	if (y >= x && x > 1)
		return (1);
	else if (x % y == 0 || x <= 1)
		return (0);
	else
		return (prime(x, y + 1));
}
