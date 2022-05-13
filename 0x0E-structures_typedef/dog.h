#ifndef DOG_H
#define DOG_H

/**
 *struct dog - a dog
 *@name: dog name
 *@age: dog age
 *@owner: dogs owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 *init_dog - initialize dog
 *d - dog struct
 *@name: dog name
 *@age: age
 *@owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 *print_dog - print dog struct
 *@d: dog struct
 */
void print_dog(struct dog *d);
#endif
