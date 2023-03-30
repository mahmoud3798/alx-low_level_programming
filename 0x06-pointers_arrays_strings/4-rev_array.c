#include "main.h"
/**
* reverse_array - function that reverses the
*	content of an array of integers.
* @a: integer array
* @n:  is the number of elements of the array.
*/
void reverse_array(int *a, int n)
{
	int *first = a;
	int *last = a + n - 1;

	while (first < last)
	{
		int temp = *first;
		*first = *last;
		*last = temp;
		first++;
		last--;
	}
}
