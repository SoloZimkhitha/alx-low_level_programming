#include <stdio.h>

typedef struct dog
{
    const char *name;
    float age;
    const char *owner;
} dog_t;

void init_dog(dog_t *d, const char *name, float age, const char *owner)
{
    d->name = name;
    d->age = age;
    d->owner = owner;
}

void print_dog(const dog_t *d)
{
    printf("Name: %s\n", d->name);
    printf("Age: %.1f\n", d->age);
    printf("Owner: %s\n", d->owner);
}
