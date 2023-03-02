#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *@c: parameter of type character
 * Return: 0
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (islower(c[i]))
		{
			c[i] = toupper(c[i]);
		}
		i++;
	}
	return (c);
}
