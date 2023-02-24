#include "main.h"
#include <ctype.h>
/**
 * _isupper- checks for uppercase character
 *
 * @c: parameter of type int
 * Return: 1 if c is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
