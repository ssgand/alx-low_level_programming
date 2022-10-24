#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function to print a structure
 * @d: structure to print
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
