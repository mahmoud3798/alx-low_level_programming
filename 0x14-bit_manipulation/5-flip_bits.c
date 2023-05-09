#include "main.h"
/**
* flip_bits -function that returns the number of bits
*	you would need to flip to get from one number to another.
* @n: long int
* @m: long int
* Return: result
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = n ^ m;
	unsigned int res = 0;
	int k = (sizeof(bits) * 8);

	while (k >= 0)
	{
		if (bits & 1)
			res++;
		bits = bits >> 1;
		k--;
	}
	return (res);
}
