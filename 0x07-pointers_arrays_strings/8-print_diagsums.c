#include "main.h"

/**
* print_diagsums -function that prints the sum of
*	the two diagonals of a square matrix of integers.
* @a: integer pointer
* @size: integer variable
*/
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", sum);
	printf("%d\n", sum2);
}
