#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - function appends the src string to the dest string
 *@dest: parameter of type character
 *@src: parameter of type character
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	char *z = dest + strlen(dest);

	while (*src != '\0')
	{
		*z++ = *src++;
	}
	*z = '\0';
	return (dest);
}

