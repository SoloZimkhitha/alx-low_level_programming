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
	int size;
	int *result;
	int i;

	size = max - min + 1;
	if (max > min)
	{
		return NULL;
	}
	result = malloc(size * sizeof(int));
	if (result == NULL)
	{
		return NULL;
	}
	for (i = min; i <= max; i++)
	{
		result[i] = min  + i;
	}
	return result;
}

