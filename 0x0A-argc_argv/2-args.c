#include <stdio.h>
/**
* main - Entry point
* @argc: integer variable
* @argv: array of chars
* Return: always 0
*/
int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; argc--; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
