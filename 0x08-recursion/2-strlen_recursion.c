#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string.
* @s: char pointer
* Return: string length
*/
int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s > '\0')
		c += _strlen_recursion(s + 1) + 1;
	return (c);
}
