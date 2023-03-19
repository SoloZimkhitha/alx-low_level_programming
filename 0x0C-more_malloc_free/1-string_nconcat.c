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
	size_t len1, len2, result_len;
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
	result_len = len1 + n + 1;
	result = (char *)malloc(result_len);
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1 ? s1 : "");
	strncat(result + len1, s2 ? s2 : "", n);
	result[result_len - 1] = '\0';
	return (result);
}
