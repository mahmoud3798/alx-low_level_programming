#include "main.h"
/**
* _strncpy -  function that copies a string.
* @dest: char pointer
* @src: char pointer
* @n: integer varaible
* Return: char pointer which is dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count] != '\0'; count)
	{
		dest[count] = src[count];
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
