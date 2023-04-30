#include "lists.h"
/**
* print_listint - prints all elements of a list_t list
* @h: pointer
* Return: number of elems
*/
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
