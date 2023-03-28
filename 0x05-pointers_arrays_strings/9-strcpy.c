#include "main.h"

/**
* _strcpy - unction that copies the string pointed to by src,
*	including the terminating null byte (\0),
*	to the buffer pointed to by dest.
* @src: char array
* @dest: char array
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
