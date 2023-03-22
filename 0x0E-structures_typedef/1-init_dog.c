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
