#include "main.h"
/**
* _fillmem - function that fills memory with a constant byte.
* @s: char pointer
* @b: char variable
* @n: unsigned int variable
* Return: char pointer
*/
/**char *_fillmem(char *s, char b, unsigned int n)
*{
*	char *ptr = s;
*	unsigned int i;
*
*	for (i = 0; n > 0; n--, i++)
*	{
*		s[i] = b;
*	}
*	return (ptr);
}*/
/**
* _calloc - function that allocates memory for an array, using malloc.
* @nmemb: first parameter
* @size: second parameter
* Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int n, i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * nmemb);
	if (ptr == 0)
	{
		return (NULL);
	}
	n = (sizeof(int) * nmemb);
	for (i = 0; n > 0; n--, i++)
	{
		ptr[i] = 0;
	}
	/*_fillmem(ptr, 0, (sizeof(int) * nmemb));*/
	return (ptr);
}
