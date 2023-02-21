#include "main.h"
#include <ctype.h>
/**
 *_islower(int c)- checks the lowercase character
 *
 * @c: input character, which is of type int
 *
 * Return: 1 if c is lower case, 0 if c is upper case
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
