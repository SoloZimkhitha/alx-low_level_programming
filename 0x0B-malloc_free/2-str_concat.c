#include <stdlib.h>
#include <string.h>
/**
 * str_concat -  copies a string
 * @s1: parameter of type integer
 * @s2: parameter of type character
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *concat;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	concat = malloc((len1 + len2 + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	memcpy(concat, s1, len1);
	memcpy(concat + len1, s2, len2 + 1);

	return (concat);
}

