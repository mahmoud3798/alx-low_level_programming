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
	char *ptr = s;
	unsigned int i;

	for (i = 0; n > 0; n--, i++)
	{
		s[i] = b;
	}
	return (ptr);
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

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * nmemb);
	if (ptr == 0)
	{
		return (NULL);
	}
	_memset(ptr, 0, (sizeof(int) * nmemb));
	return (ptr);
}
