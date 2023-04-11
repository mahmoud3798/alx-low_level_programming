#include "main.h"
/**
* str_concat - function that concatenates two strings.
* @s1: first string
* @s2: second string
* Return: char array or 0
*/
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	int len1 = 0, len2 = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	int s = len1 + len2;

	char *ch = malloc((s * sizeof(char) + 1);

	if (ch == 0)
	{
		return (NULL);
	}

	int i;

	for (i = 0; i <= s; i++)
	{
		if (i < len1)
			ch[i] = s1[i];
		else
			ch[i] = s2[i - len1];
	}
	ch[i] = '\0'
	return (ch);
}
