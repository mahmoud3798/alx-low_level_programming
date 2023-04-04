#include "main.h"

/**
* _memset - function that fills memory with a constant byte.
* @s: char pointer
* @b: char variable
* @n: unsigned int variable
* Return: char pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; n--, i++)
	{
		s[i] = b;
	}
	return (s);
}
