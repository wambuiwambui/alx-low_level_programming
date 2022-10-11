#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: the dog to be intialized
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != Null)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
