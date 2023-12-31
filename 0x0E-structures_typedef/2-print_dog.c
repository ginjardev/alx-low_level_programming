#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - print struct dog
 * @d: Pointer to a struct dog to print
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
