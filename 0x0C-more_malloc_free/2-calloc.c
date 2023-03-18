#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: parameter of type integer
 * @size: parameter of type integer
 * Return: nothing
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned long total_size = (unsigned long)nmemb * (unsigned long)size;
	void *ptr = malloc(total_size);

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	memset(ptr, 0, total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
