#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: dog age
 * @owner: dog owner
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	strncpy(new_dog->name, name, sizeof(new_dog->name) - 1);
        new_dog->name[sizeof(new_dog->name) - 1] = '\0';
	strncpy(new_dog->owner, owner, sizeof(new_dog->owner) - 1);
        new_dog->owner[sizeof(new_dog->owner) - 1] = '\0'; 

	new_dog->age = age;
	return (new_dog);
}
