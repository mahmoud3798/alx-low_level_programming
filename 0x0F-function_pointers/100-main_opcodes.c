#include "function_pointers.h"
/**
* main - Entry point
* @argc: args number
* @argv: array of arguments
* Return: 0
*/
int main(int argc, char **argv)
{
	char *ptr = (char *)main;
	int i;

	if (argc != 2)
		printf("Error\n"), exit(1);
	i = atoi(argv[1]);
	if (i < 0)
		printf("Error\n"), exit(2);
	while (i--)
	{
		printf("%02hhx%s", *ptr++, i ? " " : "\n");
	}
	return (0);
}
