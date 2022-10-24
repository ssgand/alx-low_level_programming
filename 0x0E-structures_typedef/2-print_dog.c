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
		if (d->name == NULL)
		{
			printf("Name: (nil)\nAge: %f\nOwner: %s\n", d->age, d->owner);
		}
		if (d->owner == NULL)
		{
			printf("Name: %s\nAge: %f\nOwner: (nil)\n", d->name, d->age);
		}
		else
		{
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
		}
	}
}
