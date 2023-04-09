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
		for (ch = argv[argc]; *ch; ch++)
		{
			if (*ch < '0' || *ch > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[argc]);
	}
	printf("%d\n", res);
	return (0);
}
