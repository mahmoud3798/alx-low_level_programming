#include "main.h"

/**
* _strspn - function that gets the length of a prefix substring.
* @accept: char pointer
* @s: char pointer
* Return: integer
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
		i++;
	}
	return (i);
}
