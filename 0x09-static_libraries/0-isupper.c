#include <stdio.h>
#include "main.h"
/**
* _isupper - function that checks for uppercase character
*@c: character to check
* Return: 1 if the letter is uppercase otherwise returns 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
