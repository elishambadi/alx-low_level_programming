#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
*new_dog - create a new dog
*@name: dog name
*@age: dog age
*@owner: owner's name
*Return: dog object
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (0);
	}

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
