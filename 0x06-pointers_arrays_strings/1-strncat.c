#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 *@dest: parameter of type character
 *@src: parameter of type character
 *@n: parameter of type integer
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
