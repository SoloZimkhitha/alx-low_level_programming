#include "main.h"
#include <ctype.h>
/**
 * _islower- checks if character is lower
 *
 * @c: parameter of type int
 * Return: 1 if c is lower otherwise 0
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
