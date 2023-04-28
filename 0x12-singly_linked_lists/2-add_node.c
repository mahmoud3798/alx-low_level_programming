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
* add_node - function that adds a new node at the beginning of a list_t list.
* @head: pointer
* @str: string
* Return: list with new node added
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

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
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
