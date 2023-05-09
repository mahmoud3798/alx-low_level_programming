#include "main.h"

/**
* get_endianness -function that checks the endianness.
* Return: 0 or 1
*/
int get_endianness(void)
{
	unsigned int num = 1;

	return ((int) (((char *)&num)[0]));
}
