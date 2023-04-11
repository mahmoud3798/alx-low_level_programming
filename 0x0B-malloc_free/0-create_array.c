#include "main.h"
/**
* create_array - function that creates an array of chars,
*	and initializes it with a specific char.
* @size: array size
*@c: character variable
* Return: char array or 0
*/
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (arr == 0 || size == 0)
		return (0);
	while (size--)
	{
		arr[size] = c;
	}
	return (arr);
}
