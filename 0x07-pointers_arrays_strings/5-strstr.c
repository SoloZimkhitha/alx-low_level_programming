#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strstr -  locates a substring
 * @haystack: parameter of type character
 * @needle: parameter of type character
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *result;

	result = strstr(haystack, needle);
	return (result);
}

