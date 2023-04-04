#include "main.h"

/**
* _strcmp - function that compares two strings.
* @s1: char pointer
* @s2: char pointer
* @c: integer variable
* Return: integer
*/
int _strcmp(char *s1, char *s2, unsigned int c)
{
	int cmp = 0;

	while (*s1 && cmp <= c)
	{
		if (*s1 != *s2)
		{
			cmp = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (cmp - c);
}
/**
* _strstr - function that locates a substring.
* @haystack: char pointer
* @needle: char pointer
* Return: char pointer
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;

	while (needle[i] != '\0')
		i++;
	while (*haystack != '\0')
	{
		if (_strncmp(haystack, needle, i) == 0)
			return (haystack);
		haystack++;
	}
	return ('\0');
}
