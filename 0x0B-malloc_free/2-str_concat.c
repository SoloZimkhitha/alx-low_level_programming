#include <stdlib.h>
#include <string.h>

/**
 * str_concat - copies a string
 * @s1: parameter of type character
 * @s2: parameter of type character
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	concat = calloc(len1 + len2 + 1, sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	strcpy(concat, s1);
	strcpy(concat + len1, s2);

	return (concat);
}
