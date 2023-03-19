#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * array_range - creates an array of integers
 * @min: parameter of type integer
 * @max: parameter of type integer
 * Return: the pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *result, *p;
	size_t size;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	result = malloc(size * sizeof(int));
	if (result == NULL)
	{
		return (NULL);
	}
	p = result;
	while (min <= max)
	{
		*p++ = min++;
	}
	return (result);
}
