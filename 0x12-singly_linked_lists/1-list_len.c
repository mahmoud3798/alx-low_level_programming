#include "lists.h"

/**
* list_len - function that returns the number of elements
*	in a linked list_t list.
* @h: pointer
* Return: number of elems
*/
size_t list_len(const list_t *h)
{
	size_t elems;

	for (elems = 0; h != NULL; elems++)
		h = h->next;
	return (elems);
}
