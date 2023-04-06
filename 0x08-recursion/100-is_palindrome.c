#include "main.h"
int pali(char *c, int s, int mid, int e);
/**
* is_palindrome -  function that returns 1 if
*	a string is a palindrome and 0 if not.
* @s: char pointer
* Return: 1 if a string is a palindrome and 0 if not.
*/
int is_palindrome(char *s)
{
	int end = 0;

	while (*s > '\0')
	{
		end++;
		s++;
	}
	return (pali(s, 0, end % 2, end - 1));
}
/**
* pali - check if s is palindrome
* @c: char pointer
* @s: start
* @e: end
* @mid: middle
* Return: 1 if palindrome else 0
*/
int pali(char *c, int s, int mid, int e)
{
	if ((s == e && mid != 0) || (s == e + 1 && mid == 0))
		return (1);
	else if (c[s] != c[e])
		return (0);
	return (pali(c, s + 1, mid, e - 1));
}
