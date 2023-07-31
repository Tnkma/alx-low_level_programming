#include "dog.h"

/**
 * new_dog - creates a new dog struct
 * @name: dogs name
 * @age: dogs age
 * @owner: owner name
 * Return: Always 0 for success
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *new_name;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	new_name = malloc(sizeof(dog_t));
	if (new_name == NULL)
	{
		free(new_name);
		return (NULL);
	}
	new_name->name = malloc(i * sizeof(new_name->name));
	if (new_name->name == NULL)
	{
		free(new_name->name);
		free(new_name);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		new_name->name[k] = name[k];
	new_name->age = age;
	new_name->owner = malloc(j * sizeof(new_name->owner));
	if (new_name->owner == NULL)
	{
		free(new_name->owner);
		free(new_name->name);
		free(new_name);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		new_name->owner[k] = owner[k];
	return (new_name);
}
