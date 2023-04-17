#include "dog.h"
#include <stdio.h>
/**
* free_dog - function that frees dogs.
* @d: variable of type sturct
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
