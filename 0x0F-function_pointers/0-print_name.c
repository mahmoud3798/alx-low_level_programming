#include "function_pointers.h"
/**
 * print_name - function that prints a name.
 * @name: array of char
 * @f: pointer to function
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f != NULL)
		f(name);
}
