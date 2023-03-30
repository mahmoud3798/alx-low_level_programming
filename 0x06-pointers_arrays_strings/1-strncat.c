#include "main.h"

/**
* _strncat - function that concatenates two strings.
* @dest: char pointer
* @src: char pointer
* @n: integer varaible
* Return: char pointer which is dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2;

	while (dest[count])
		count++;
	for (count2 = 0; count2 < n && src[count2] != '\0'; count2++)
	{
		dest[count] = src[count2];
		count++;
	}
	dest[count + count2] = '\0';
	return (dest);
}
