#include <stdio.h>
#include "dog.h"
#include <stdio.h>
#include "dog.h"
/**
 * struct dog - data
 * print_dog - This function prints information about a dog
 * @d: pointer
 * @name: dog name
 * @age: dog age
 * @breed: dog breed
 * Return: Always 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
