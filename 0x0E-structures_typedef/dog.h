#ifndef DOG
#define DOG

/**
 * struct dog - structure including information about dogs
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: storage information for dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
