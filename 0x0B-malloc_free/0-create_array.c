#include <stdlib.h>
#include "main.h"
/**
 *
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	arr[0] = c;
	return (arr);
}
