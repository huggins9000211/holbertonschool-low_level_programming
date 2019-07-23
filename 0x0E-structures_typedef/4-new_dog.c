#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - Prints a string
 * @s: char
 *
 * Return: int
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[0] != '\0')
	{
		s++;
		count++;
	}
	return (count);

}
/**
 * _strcpy - check the code for Holberton School students.
 * @dest: char
 * @src: char
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int count;
	int len;

	count = 0;
	len = _strlen(src) + 1;
	while (count < len)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
/**
 * new_dog - check the code for Holberton School students.
 * @name: dog
 * @age: dog
 * @owner: dog
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *end_dog;
	char *n;
	char *o;

	end_dog = malloc(sizeof(dog_t));
	if (end_dog == NULL)
	{
		return (NULL);
	}
	n = malloc(sizeof(name));
	if (!n)
	{
		free(end_dog);
		return (NULL);
	}
	o = malloc(sizeof(owner));
	if (!o)
	{
		free(n);
		free(end_dog);
		return (NULL);
	}
	end_dog->name = n;
	end_dog->age = age;
	end_dog->owner = o;


	return (end_dog);

}
