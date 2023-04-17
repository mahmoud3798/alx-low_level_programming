#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
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
* _strcpy - unction that copies the string pointed to by src,
*	including the terminating null byte (\0),
*	to the buffer pointed to by dest.
* @src: char array
* @dest: char array
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	dest[i] = '\0';
	return (dest);
}
/**
* new_dog - function that creates a new dog.
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d;

	if (age < 0 || !name || !owner)
		return (NULL);
	d = (dog_t *) malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*d).name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*d).owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = _strcpy(d->name, name);
	d->age = age;
	d->owner = _strcpy(d->owner, owner);
	return (d);
}
