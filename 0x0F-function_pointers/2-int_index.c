#include "function_pointers.h"
/**
* int_index - function that searches for an integer.
* @array: int pointer
* @size: int parameter
* @cmp: pointer to function
* Return: index or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array != NULL && size && cmp != NULL)
	{
		for (m = 0; m < size; m++)
		{
			if (cmp(array[m]) != NULL)
				return (m);
		}
	}
	return (-1);
}
