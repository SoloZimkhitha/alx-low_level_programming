#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: parameter of type integer
 * Return: nothing
*/
int _sqrt_recursion(int n)
{
    if (n < 0)
	{
		return (0);
	}
	
	else if (n % 2 == 0)
	{
		return (_pow_recursion(n, n / 2) * _pow_recursion(n, n / 2));
	}
	else
	{
		return (n * _pow_recursion(n, n / 2) * _pow_recursion(n, n / 2));
	}
}