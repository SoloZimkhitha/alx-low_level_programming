#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - function appends the src string to the dest string
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	char *n = dest;
	while (*n != '\0')
	{
		n++;
	}
	while (*src != '\0')
	{
		*n = *src++;
	}
	*n = '\0';
	return dest;
}
