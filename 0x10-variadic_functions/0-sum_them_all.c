#include "variadic_functions.h"
/**
* sum_them_all - function that returns the sum of all its parameters.
* @n: # of args
* @...: integers
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int res = 0, m = n;
	va_list p;

	if (!n)
		return (0);
	va_start(p, n);
	while (m--)
	{
		res += var_arg(p, int);
	}
	va_end(p);
	return (res);
}
