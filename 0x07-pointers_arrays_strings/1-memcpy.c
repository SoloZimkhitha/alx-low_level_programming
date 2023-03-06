#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _memcpy -  copies memory area
 * @dest: parameter of type character
 * @src: parameter of type character
 * @n: parameter of type integer
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest,src, n);
	return (dest);
}
