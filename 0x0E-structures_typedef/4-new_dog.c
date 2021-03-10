#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog -  function that creates a new dog.
 * @name: ptr de name
 * @age: age of pet
 * @owner: name of own
 * Return: pet
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, m, n;
	dog_t *pet;

	if (name == NULL || owner == NULL)
		return (NULL);
	pet = malloc(sizeof(dog_t));

	if (pet == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
	{}
	i++;
	(*pet).name = malloc(i * sizeof(char));
	if ((*pet).name == NULL)
	{
		free(pet);
		return (NULL);
	}
	for (j = 0; owner[j] != '\0'; j++)
	{}
	(*pet).owner = malloc(j * sizeof(char));
	if ((*pet).owner == NULL)
	{
		free((*pet).name);
		free(pet);
		return (NULL);
	}
	for (m = 0; m < i; m++)
		(*pet).name[m] = name[m];

	(*pet).age = age;

	for (n = 0; n < j; n++)
		(*pet).owner[n] = name[n];
	return (pet);
}
