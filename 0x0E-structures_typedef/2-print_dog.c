#include <stdio.h>
#include "dog.h"
/**
 * print_dog - This function prints information about a dog
 * @d: pointer
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
	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: %s\n", "(nil)");
	}
}
