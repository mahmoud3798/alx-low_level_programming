#include "main.h"
/**
* _calloc - function that allocates memory for an array, using malloc.
* @nmemb: first parameter
* @size: second parameter
* Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(sizeof(int) * nmemb + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb ; i++)
		ptr[i] = 0;
	return (ptr);
}
