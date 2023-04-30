#include "lists.h"
/**
  * listint_len - gets the number of nodes in a list
  * @h: pointer
  * Return: number of elems
  */
size_t listint_len(const listint_t *h)
{
	size_t p;

	p = 0;
	while (h != NULL)
	{
		h = h->next;
		p++;
	}
	return (p);
}

