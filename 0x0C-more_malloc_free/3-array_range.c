#include "main.h"
/**
* array_range - function that creates an array of integers.
* @min: first param
* @max: second param
* Return: integer array or 0
*/
int *array_range(int min, int max)
{
	int size, i, *ptr;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ptr[i] = min++;
	return (ptr);
}
