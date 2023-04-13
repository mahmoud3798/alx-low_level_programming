#include "main.h"
/**
* malloc_checked - function that allocates memory using malloc.
* @b: int variable
* Return: Pointer to this reserved space
*/
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0 || ptr == NULL)
		exit(98);
	return (ptr);
}
