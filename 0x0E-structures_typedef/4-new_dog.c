#include "dog.h"

/**
 * new_dog - initializes new dog and creates copy for name and owner
 *
 * @name: name of dog
 *
 * @age: age of dog
 *
 * @owner: name of owner
 *
 * Return: NULL if function fails, new_dog on success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_cp, *owner_cp;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	name_cp = malloc(strlen(name) + 1);
	if (name_cp == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(name_cp, name);

	owner_cp = malloc(strlen(owner) + 1);
	if (owner_cp == NULL)
	{
		free(name_cp);
		free(new_dog);
		return (NULL);
	}
	strcpy(owner_cp, owner);

	new_dog->name = name_cp;
	new_dog->age = age;
	new_dog->owner = owner_cp;

	return (new_dog);
}
