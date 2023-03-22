#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data of the dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Always 0
 */
typedef struct dog
{
        char *name;
        float age;
        char *owner;
} dog_t;      
void init_dog(struct dog *p, char *name, float age, char *owner);
void print_dog(struct dog *p);
#endif
