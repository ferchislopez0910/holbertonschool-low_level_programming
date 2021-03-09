#include <stdio.h>
#include "dog.h"


/**
 * init_dog - function that initialize a variable of type struct dog.
 * @name: name
 * @age: age
 * @owner: owner
 * @d: ptr
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
