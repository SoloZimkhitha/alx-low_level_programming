#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds 2 numbers
 * @a: parameter of type int
 * @b: parameter of type int
 * Return: a plus b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 numbers
 * @a: parameter of type int
 * @b: parameter of type int
 * Return: a minus b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 numbers
 * @a: parameter of type int
 * @b: parameter of type int
 * Return: a multiply by b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - devide 2 numbers
 * @a: parameter of type int
 * @b: parameter of type int
 * Return: a devided by b.
 */
int op_div(int a, int b)
{
	if(b == 0)
	{
		exit(1);
	}
	return (a / b);
}

/**
 * op_mod - gets the remainder
 * @a: parameter of type int
 * @b: parameter of type int
 * Return: a remainder of a devide by b.
 */
int op_mod(int a, int b)
{
	if(b == 0)
	{
		exit(1);
	}
	return (a % b);
}
