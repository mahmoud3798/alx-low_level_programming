#include <unistd.h>

/**
 * main - Entry Point
 *
 * Description: C program to print string without printf or puts
 *
 * Return: 1
*/

int main(void)
{
	char s[]="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1,s,59);
	return (1);
}
