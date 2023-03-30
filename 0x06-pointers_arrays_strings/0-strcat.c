#include "main.h"

/**
* _strcat -  function that concatenates two strings.
* @dest: char pointer
* @src: char pointer
* Return: char pointer
*/

char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (dest[count])
		count++;
	while (src[count2])
	{
		count++;
		dest[count] = src[count2];
		count2++;
	}
	return (dest);
}
