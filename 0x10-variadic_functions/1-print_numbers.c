#include "variadic_functions.h"
/**
* print_numbers - function that prints numbers, followed by a new line.
* @n: # of args
* @...: integers
* @separator: char pointer
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int m = n;
	va_list p;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(p, n);
	while (m--)
	{
		printf("%d%s", va_arg(p, int), m ? (separator ? separator : "") : "\n");
	}
	va_end(p);
}
