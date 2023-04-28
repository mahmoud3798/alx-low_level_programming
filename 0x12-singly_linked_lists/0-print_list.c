#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t list.
* @h: pointer
* Return: struct
*/
size_t print_list(const list_t *h)
{
	size_t list = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str ? h->str : "[0] (nil)");
		h = h->next;
		list++;
	}
	return (list);
}
