#include "lists.h"
/**
  * add_nodeint_end - add new nodes to the end of the list
  * @head: pointer
  * @n: int
  * Return: pointer
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *p;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	p = *head;
	while (p->next != NULL)
		p = p->next;
	p->next = ptr;
	return (*head);
}
