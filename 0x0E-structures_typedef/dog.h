#ifndef DOG_H
#define DOG_H

/**
 * struct dog_t - data of the dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Always 0
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog_t *d, char *name, float age, char *owner);
void print_dog(struct dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
