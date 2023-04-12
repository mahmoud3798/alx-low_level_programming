#include "main.h"
/**
* count - count of string words
* @arr: string
* Return: string count
*/
int count(char *arr)
{
	int c = 0, m = 0;

	while (arr[m])
	{
		if (arr[m] == ' ')
		{
			if (arr[m + 1] != '\0' && arr[m + 1] != ' ')
				c++;
		}
		else if (m == 0)
		{
			c++;
		}
		m++;
	}
	c++;
	return (c);
}
/**
* strtow - function that splits a string into words.
* @str: array of char
* Return: 2D array
*/
char **strtow(char *str)
{
	char **ch;
	int c = 0, c2 = 0, i = 0, j, m, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	c = count(str);
	if (c == 1)
		return (NULL);
	ch = (char **)malloc(c * sizeof(char *));
	if (ch == NULL)
		return (NULL);
	ch[c - 1] = NULL;
	while (str[i])
	{
		if ((i == 0 || str[i - 1] == ' ') && str[i] != ' ')
		{
			j = 1;
			while (str[i + j] != ' ' && str[i + j])
				j++;
			j++;
			ch[c2] = (char *)malloc(j * sizeof(char));
			j--;
			if (ch[c2] == NULL)
			{
				for (m = 0; m < c2; m++)
					free(ch[m]);
				free(ch[c - 1]);
				free(ch);
				return (NULL);
			}
			for (k = 0; k < j; k++)
				ch[c2][k] = str[i + k];
			ch[c2][k] = '\0';
			c2++;
			i += j;
		}
		else
			i++;
	}
	return (ch);
}
