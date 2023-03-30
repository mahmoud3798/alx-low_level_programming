#include "main.h"

/**
* Deli - to check whether the char is delimeter or not
* @s: char variable
* Return: 1 if char is delimeter, otherwise 0
*/
int Deli(char s)
{
	char d[] = " \t\n,.!?\"(){}";
	int i;

	for (i = 0; i < 12; i++)
		if (s == d[i])
			return (1);
	return (0);
}
/**
* low - to check whether the char is lowercase
* @l: char variable
* Return: 1 if char is delimeter, otherwise 0
*/
int low(char l)
{
	if (l >= 97 && l <= 122)
		return (1);
	else
		return (0);
}
/**
* cap_string - function that capitalizes all words of a string.
* @s: char pointer
* Return: char pointer
*/
char *cap_string(char *s)
{
	char *p = s;
	int ISdelimeter = 1;

	while (*s)
	{
		if (Deli(*s))
			ISdelimeter = 1;
		else if (ISdelimeter == 1 && low(*s))
		{
			*s -= 32;
			ISdelimeter = 0;
		}
		else
			ISdelimeter = 0;
		s++;
	}
	return (s);
}
