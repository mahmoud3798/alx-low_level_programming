#include "main.h"

/**
* leet -  a function that encodes a string into 1337.
* @s: char pointer
* Return: char pointer
*/
char *leet(char *s)
{
	char *p = s, ch[] = {'A', 'E', 'O', 'T', 'L'};
	int code[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < sizeof(ch) / sizeof(char); i++)
		{
			if (*s == ch[i] || *s == ch[i] + 32)
				*s = 48 + code[i];
		}
		s++;
	}
	return (p);
}
