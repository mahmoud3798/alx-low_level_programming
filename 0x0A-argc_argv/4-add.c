#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: integer variable
* @argv: array of chars
* Return: always 0
*/
int main(int argc, char const *argv[])
{
	int res = 0;
	char *ch;

	while (--argc)
	{
		ch = argv[argc];
		while (*ch)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
			ch++;
		}
		res += atoi(argv[argc]);
	}
	printf("%d\n", res);
	return (0);
}
