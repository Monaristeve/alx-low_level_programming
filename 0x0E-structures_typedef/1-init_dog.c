#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a program that initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: initializing name
 * @age: initializing age
 * @owner: initializer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->owner = owner;
	d->age = age;
}
