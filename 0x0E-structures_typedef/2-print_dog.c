#include <stdio.h>
#include "dog.h"

/**
 *print_dog - initialize dog
 *@struct d: dog struct
 *Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		char *name = d->name;
		char *owner = d->owner;

		if (d->name == NULL)
		{
			name = "(nil)";
		}
		if (d->owner == NULL)
		{
			owner = "(nil)";
		}
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
	}
}
