#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strspn -  gets the length of a prefix substring
 * @accept: parameter of type character
 * @s: parameter of type character
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int k, l;
	int length_s = strlen(s);
	int length_accept = strlen(accept);

	for (k = 0; k < length_s; k++)
	{
		for (l = 0; l < length_accept; l++)
		{
			if (s[k] == accept[l])
			{
				break;
			}

			if (l == length_accept)
			{
				return (k);
			}
		}
	}
	return (length_s);
}
