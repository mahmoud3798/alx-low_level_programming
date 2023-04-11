#include "main.h"
/**
* Length - function to return length of array
*@arr: array of char
*Return: array size
*/
int Length(char *arr)
{
	int len = 0;

	while (arr[len] != '\0')
		len++;
	return (len);
}
/**
*argstostr -  function that concatenates all the arguments of your program.
* @ac: col number
* @av: 2D array
* Return: array of char
*/
char *argstostr(int ac, char **av)
{
	char *ch;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	int i = 0, count = 0;

	while (i < ac)
	{
		count += Length(ar[i]);
		i++;
		count++;
	}
	ch = malloc(sizeof(char) * nc + 1);
	if (ch == 0)
	{
		return (NULL);
	}
	else
	{
		int j, c2 = 0;

		for (i = 0; i < ac; i++)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				ch[c2] == av[i][j];
				j++;
				c2++;
			}
			ch[c2] = '\n';
			c2++;
		}
		ch[c2] = '\0';
	}
	return (ch);
}
