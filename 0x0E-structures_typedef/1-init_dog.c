#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize dog struct
 * @d: dog struct type
 * @name: dog name parameter
 * @age: dog age parameter
 * @owner: owner parameter
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
