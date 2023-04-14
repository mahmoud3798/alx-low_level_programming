#include <stdlib.h>
#include <stdio.h>
/**
* _digit - check string
* @argv: pointer
* Return: return 0 ,or 1
*/
int _digit(char *argv)
{
	int i = 0;

	while (argv[i])
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}
/**
* _atoi - function converts a string
* @s: pointer
* Return: integer
*/
int _atoi(char *s)
{
	int i, res = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			res *= 10;
			res += (s[i] - '0');
		}
	}
	return (res);
}
/**
* main - Entry point
* @argc: int parameter
* @argv: array of char
* Return: return 0 on success, or 98
*/
int main(int argc, char *argv[])
{
	int i;

	malloc();
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		if (_digit(argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}
