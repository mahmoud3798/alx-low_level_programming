#include "main.h"
/**
* _strdup - function that returns a pointer to a newly
*	allocated space in memory,
*	which contains a copy of the string given as a parameter.
* @str: char array
* Return: char array or NULL
*/
char *_strdup(char *str)
{
	int s;
	char *ch;

	if (str == NULL)
		return (NULL);
	s = 0;
	while (str[s] != '\0')
		s++;
	ch = malloc(s * sizeof(*str) + 1);
	if (ch == 0)
	{
		return (NULL);
	}
	else
	{
		int i;

		for (i = 0; i < s; i++)
			ch[i] = str[i];
	}
	return (ch);
}
