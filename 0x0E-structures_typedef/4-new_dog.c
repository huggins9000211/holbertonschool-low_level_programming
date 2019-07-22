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
	dog_t n_dog;
	dog_t *end_dog;

	end_dog = malloc(sizeof(dog_t));
	if (end_dog == NULL)
	{
		return (NULL);
	}

	n_dog.name = name;
	n_dog.age = age;
	n_dog.owner = owner;

	end_dog = &n_dog;
	return (end_dog);

}
