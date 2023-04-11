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
	int c = 0, i = 0;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	c = count(str);
	if (c == 1)
	{
		return (NULL);
	}
	ch =(char **)malloc(c * sizeof(char *));
	if (ch == NULL)
	{
		return (NULL);
	}
	ch[c - 1] = NULL;
	while(str[i])
	{
		
	}
}
