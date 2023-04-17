#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - a functio to create a dog
 *@name: the name of the dog
 *@age: the age of the dog
 *@owner: the owner of the dog
 *Return: a pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int i = 0, namey = 0, ownee = 0;

	doggy = malloc(sizeof(*doggy));
	if (!doggy)
		return (NULL);

	while (name[namey])
		namey++;
	while (owner[ownee])
		ownee++;

	doggy->name = malloc(namey + 1);
	doggy->owner = malloc(ownee + 1);

	if (!doggy->name || !doggy->owner)
	{
		free(doggy->name);
		free(doggy->owner);
		free(doggy);
		return (NULL);
	}

	for (i = 0; i < namey; i++)
		doggy->name[i] = name[i];
	doggy->name[i] = '\0';

	doggy->age = age;

	for (i = 0; i < ownee; i++)
		doggy->owner[i] = owner[i];
	doggy->owner[i] = '\0';

	return (doggy);
}
