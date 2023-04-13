#include "main.h"
/**
* string_nconcat - function that concatenates two strings.
* @s1: first string
* @s2: second string
* @n: int variable
* Return: char array or 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *ch;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	ch = malloc(len1 * sizeof(char) + n + 1);
	if (ch == 0)
	{
		return (NULL);
	}
	for (i = 0; i <= len1 /*s1[i] != '\0'*/; i++)
		ch[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		ch[i] = s2[j];
		i++;
	}
	ch[i] = '\0';
	return (ch);
}
