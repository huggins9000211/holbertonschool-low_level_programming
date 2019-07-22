#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - check the code for Holberton School students.
 * @name: dog
 * @age: dog
 * @owner: dog
 *
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	char *n;
	char *o;
	dog_t n_dog;
	dog_t *end_dog;

	n = malloc(sizeof(name));
	if (n == NULL)
	{
		return (NULL);
	}
	_strcpy(n, name);
	o = malloc(sizeof(owner));
	if (n == NULL)
	{
		return (NULL);
	}
	_strcpy(o, owner);

	n_dog.name = n;
	n_dog.age = age;
	n_dog.owner = o;

	end_dog = &n_dog;
	return (end_dog);

}
