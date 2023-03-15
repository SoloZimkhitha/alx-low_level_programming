#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a new string
 * @str: parameter of type char
 * Return: a pointer to a new string
 */
char *_strdup(char *str)
{
	unsigned int len;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str) + 1;
	arr = malloc(len * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	memcpy(arr, str, len);
	return (arr);
}
