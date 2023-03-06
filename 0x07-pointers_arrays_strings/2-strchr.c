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
	char *result;

	result = strchr(s, c);
	return (result);
}
