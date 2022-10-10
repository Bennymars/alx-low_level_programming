#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: returns a pointer to newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *dog_name, *dog_owner;
	int len_name = 0, len_owner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	dog_name = malloc(len_name + 1);
	if (dog_name == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		dog_name[i] = name[i];
	dog_name[i] = '\0';

	dog_owner = malloc(len_owner + 1);
	if (dog_owner == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		dog_owner[i] = owner[i];
	dog_owner[i] = '\0';

	new_dog->name = dog_name;
	new_dog->age = age;
	new_dog->owner = dog_owner;
	return (new_dog);
}
