#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: parameter of type character
 * @s2: parameter of type character
 * @n: parameter of type integer
 * Return: a pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1, len2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = s1 ? strlen(s1) : 0;
	len2 = s2 ? strlen(s2) : 0;
	if (n >= len2)
	{
		n = len2;
	}
	result = (char *)malloc(len1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2);
	result[len1 + len2] = '\0';
	return (result);
}
