#include <stdio.h>
#include "dog.h"
/**
 * struct dog - data
 * print_dog - prints data
 * @d: pointer
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
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
