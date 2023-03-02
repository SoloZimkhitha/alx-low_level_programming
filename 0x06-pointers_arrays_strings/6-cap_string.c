#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string
 * @c: parameter of type character
 * Return: 0
 */
char *cap_string(char *c)
{
   	int i;

	while (c[i] != '\0')
	{
		if (islower(c[i]))
		{
			c[i] = toupper(c[i]);
		}
		i++;
	}
	return (str(c));
}
