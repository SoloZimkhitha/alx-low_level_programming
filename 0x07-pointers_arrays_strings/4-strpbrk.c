#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: parameter of type character
 * @accept: parameter of type character
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	char *result;

	result = strpbrk(s, accept);
	return result;
}
