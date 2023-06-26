#include "main.h"

/**
* _atoi - function that convert a string to an integer.
* @s: char array
* Return: integer
*/
int _atoi(char *s)
{
	unsigned int n;
	int sy;

	n = 0;
	sy = 1;
	do {
		if (*s == '-')
			sy *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);
	return (n * sy);
}
