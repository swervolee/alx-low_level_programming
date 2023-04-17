#include "dog.h"
#include "stdlib.h"
/**
 *init_dog - a function to describe a dog
 *@name:the dogs name
 *@age: the dogs age
 *@owner: the owner of the dog
 *Return 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner =owner;
}
