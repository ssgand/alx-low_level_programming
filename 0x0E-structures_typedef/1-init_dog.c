#include "dog.h"

/**
 * init_dog - function to initialise a structure
 * @d: derivative structure
 * @name: name of the dog in the structure
 * @age: age of the dog in the structure
 * @owner: owner of the dog in the structure
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
