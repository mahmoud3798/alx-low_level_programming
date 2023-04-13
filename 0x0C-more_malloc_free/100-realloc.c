#include "main.h"
/**
* _realloc - function that reallocates a memory block using malloc and free
* @ptr: pointer
* @old_size: old size of pointer
* @new_size: new size of pointer
* Return: pointer or NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);
		if (ptr1 == NULL)
			return (NULL);
		else
			return (ptr1);
	}
	if (new_size > old_size)
	{
		ptr1 = malloc(new_size);
		if (ptr1 == NULL)
			 return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)ptr1 + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (ptr1);
}
