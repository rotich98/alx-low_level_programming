#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog -> initializes variable of dog
 * @d: pointer to struct dog
 * @name: name parameter of the dog
 * @age: parameter age of the dog
 * @owner: parameter owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
