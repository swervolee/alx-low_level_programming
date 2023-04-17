#ifndef DOG_H
#define DOG_H

/**
 *struct dog - a dog structure
 *@name: the name of the dog
 *@age: the age of the dog
 *@owner: the owner of the dog
 *
 *description: a structure for a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void free_dog(dog_t *d);
typedef struct dog dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif/*DOG_H*/