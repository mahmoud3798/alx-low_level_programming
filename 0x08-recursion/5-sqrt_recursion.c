#include "main.h"
int find_root(int x, int y);
/**
* _sqrt_recursion - function that returns the
*	natural square root of a number.
* @n: int variable
* Return: square root of n
*/
int _sqrt_recursion(int n)
{
	return (find_root(n, 1));
}
/**
* find_root - function to find root of given number
* @x: int variable
* @y: int variable
* Return: root of x
*/
int find_root(int x, int y)
{
	if (y * y < x)
		return (find_root(x, y + 1));
	else if (y * y == x)
		return (y);
	else
		return (-1);
}
