#include <stdio.h>
#include "dog.h"
/**
 *init_dog - initialize
 *@d: dog struct
 *@name: dog name
 *@age: dog age
 *@owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
