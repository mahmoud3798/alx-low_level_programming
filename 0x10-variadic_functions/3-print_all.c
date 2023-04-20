#include "variadic_functions.h"
/**
* format_char - function
* @separator: char pointer
* @p: arg
*/
void format_char(char *separator, va_list p)
{
	printf("%s%c", separator, va_arg(p, int));
}
/**
* format_int - function
* @separator: char pointer
* @p: arg
*/
void format_int(char *separator, va_list p)
{
	printf("%s%d", separator, va_arg(p, int));
}
/**
* format_float - function
* @separator: char pointer
* @p: arg
*/
void format_float(char *separator, va_list p)
{
	printf("%s%f", separator, va_arg(p, int));
}
/**
* format_string - function
* @separator: char pointer
* @p: arg
*/
void format_string(char *separator, va_list p)
{
	char *s = va_arg(p, char *);

	switch ((int)(!s))
		case 1:
			s = "(nil)";
	printf("%s%s", separator, s);
}
/**
* print_all - function that prints anything
* @format: char pointer
*/
void print_all(const char * const format, ...)
{
	int m = 0, j;
	char *separator = "";
	va_list p;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};
	va_start(p, format);
	while (format && format[m])
	{
		j = 0;
		while (tokens[j].token)
		{
			if format[m] == tokens[j].token[0])
			{
				tokens[j].f(separator, p);
				separator = ", ";
			}
			j++;
		}
		m++;
	}
	printf("\n");
	va_end(p);
}
