#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that initialize a variable of type struct dog.
 * @d: ptr
 */

void print_dog(struct dog *d)
{
	if (d != '\0')
	{
		printf("Name: %s\n", (*d).name = NULL ? "(nil)" : (*d).name);
		printf("Age: %f\n", (*d).age = NULL ? 0 : (*d).age);
		printf("Owner: %s\n", (*d).owner = NULL ? "(nil)" : (*d).owner);
	}

}
