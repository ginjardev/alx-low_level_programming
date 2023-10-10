#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - dog_t struct maker
 * @d: pointer to struct dog_t
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
