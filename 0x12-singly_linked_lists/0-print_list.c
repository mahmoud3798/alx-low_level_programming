#include "lists.h"

/**
* _strlen - function that returns the length of a string.
* @s: string variable
* Return: string s lenght
*/

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
/**
* print_list - function that prints all the elements of a list_t list.
* @h: pointer
* Return: struct
*/
size_t print_list(const list_t *h)
{
	size_t list = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		list++;
	}
	return (list);
}
