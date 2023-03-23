#include <stdio.h>
#include <stdlib.h>
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
	dog_t my_dog;

    my_dog.name = name;
    my_dog.age = age;
    my_dog.owner = owner;
	
	
	return (my_dog);
}

