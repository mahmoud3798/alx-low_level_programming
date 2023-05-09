#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer of type char
 * Return: result or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, power = 1;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
		;
	i--;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			res += power;
		i--;
		power += power;
	}
	return (res);
}
