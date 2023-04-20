#include "function_pointers.h"
/**
* array_iterator - function that executes a function given as a
*	parameter on each element of an array.
* @array: int pointer
* @size: int parameter
* @action: pointer to function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *m = array + size - 1;

	if (array != NULL && size && action != NULL)
	{
		while (array <= m)
			action(*array++);
	}
}
