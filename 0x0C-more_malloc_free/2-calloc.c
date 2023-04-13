#include "main.h"
/**
* _fillmem - function that fills memory with a constant byte.
* @s: char pointer
* @b: char variable
* @n: unsigned int variable
* Return: char pointer
*/
char *_fillmem(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; n--, i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
* _calloc - function that allocates memory for an array, using malloc.
* @nmemb: first parameter
* @size: second parameter
* Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	_fillmem(ptr, 0, sizeof(int) * nmemb);
	return (ptr);
}
