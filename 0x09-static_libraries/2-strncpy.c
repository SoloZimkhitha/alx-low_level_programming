#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*_strncpy - copies a string
*@dest: parameter of type character
*@src: parameter of type character
*@n: parameter of type integer
*Return: 0
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
