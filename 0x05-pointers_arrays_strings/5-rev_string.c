#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * rev_string- reverses a string
 * @s: parameter of type character
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		s[i - (len  - 1)] = s[i];
	}
	puts(s);
}
