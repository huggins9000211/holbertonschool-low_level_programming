#include <stdio.h>
#include "dog.h"

/**
 * init_dog - check the code for Holberton School students.
 * @d: dog
 * @name: dog
 * @age: dog
 * @owner: dog
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;

}
