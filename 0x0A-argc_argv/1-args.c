#include <stdio.h>
/**
* main - Entry point
* @argc: integer variable
* @argv: array of chars
* Return: always 0
*/
int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
