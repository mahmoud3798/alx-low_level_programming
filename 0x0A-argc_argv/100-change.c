#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: integer variable
* @argv: array of chars
* Return: always 0
*/
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i;
		int cash = atoi(argv[1]);
		int cent[] = {25, 10, 5, 2, 1};
		int minCoins = 0;

		for (i = 0; i < 5; i++)
		{
			if (cash >= cent[i])
			{
				minCoins += cash / cent[i];
				cash = cash % cent[i];
				if (cash % cent[i] == 0)
					break;
			}
		}
		printf("%d\n", minCoins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

