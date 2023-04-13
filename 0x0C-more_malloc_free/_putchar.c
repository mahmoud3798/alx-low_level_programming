#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
* _putchar - write character
*
* @c: character which printed
*
* Return: On success 1. and -1 on error
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
