#include "lists.h"
/**
  * add_nodeint - add new nodes to the list
  * @head: pointr
  * @n: int
  * Return: pointer
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = *head;
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
