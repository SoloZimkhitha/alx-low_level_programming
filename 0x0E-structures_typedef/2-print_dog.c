#include <stdio.h>

struct dog
{
    const char *name;
    float age;
    const char *owner;
};

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
                return;
	}
    printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
    printf("Age: %.6f\n", d->age);
    printf("Owner: %s\n", d->owner);
}
