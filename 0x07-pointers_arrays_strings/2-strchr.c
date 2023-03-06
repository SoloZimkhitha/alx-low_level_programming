#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strchr - locates a character in a string
 * @s: parameter of type character
 * @c: parameter of type character
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}
	}
	return NULL;
}
