#include "main.h"
/**
*alloc_grid - function that returns a pointer to a 2 dimensional array
*	of integers.
* @width: col number
* @height: row number
* Return: 2D array
*/
int **alloc_grid(int width, int height)
{
	int **arr;

	arr = malloc(sizeof(*arr) * height);
	if (arr == 0 || height <= 0 || width <= 0)
	{
		return (NULL);
	}
	else
	{
		int i, j;

		for (i = 0; i < height; i++)
		{
			arr[i] = malloc(sizeof(**arr) * width);
			if (arr[i] == 0)
			{
				while (i--)
					free(arr[i]);
				free(arr);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				arr[i][j] = 0;
		}
	}
	return (arr);
}
