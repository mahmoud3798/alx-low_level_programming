#include "variadic_functions.h"
/**
* print_strings - function that prints strings, followed by a new line.
* @n: # of args
* @...: integers
* @separator: char pointer
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int m = n;
	va_list p;
	char *s;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(p, n);
	while (m--)
	{
		printf("%s%s", (s = va_arg(p, char *)) ? s : "(nil)",
		m ? (separator ? separator : "") : "\n");
	}
	va_end(p);
}
