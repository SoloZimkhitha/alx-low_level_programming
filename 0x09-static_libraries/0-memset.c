#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _memset - fills memory with a constant byte
 * @s: parameter of type character
 * @b: parameter of type character
 * @n: parameter of type integer
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
return (s);
}
