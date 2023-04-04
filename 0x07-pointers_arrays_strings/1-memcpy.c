#include "main.h"

/**
* _memcpy -  function that copies memory area.
* @dest: char pointer
* @src: char pointer
* @n: unsigned int variable
* Return: char pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
