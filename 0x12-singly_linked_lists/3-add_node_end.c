#include "lists.h"
/**
* add_node_end - function that adds a new node at the end of a list_t list.
* @head: pointer
* @str: string
* Return: new node added
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	list_t *p = *head;

	if (ptr == NULL || head == NULL)
		return (NULL);
	if (str != NULL)
	{
		ptr->str = strdup(str);
		if (!ptr->str)
		{
			free(ptr);
			return (NULL);
		}
		ptr->len = _strlen(ptr->str);
	}
	if (p)
	{
		while (p->next)
			p = p->next;
		p->next = ptr;
	}
	else
		*head = ptr;
	return (ptr);
}
