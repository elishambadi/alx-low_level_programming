#ifndef DOG_H
#define DOG_H

/**
 *struct dog - a dog
 *@name: dog name
 *@age: dog age
 *@owner: dogs owner
 *
 *Description: for struct dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 *init_dog - initialize dog
 *@d: dog struct
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

/**
 *new_dog - create a new dog instance
 *@name: dog name
 *@age: dog age
 *@owner: owners name
 *Return: new dog object
 */
dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
