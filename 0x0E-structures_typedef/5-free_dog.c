#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - frees memory allocated for a struct dog
 * @d: a ponter help       
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
