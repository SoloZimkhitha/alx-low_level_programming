#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name as is
 * @name: parameter of type string
 * @f: parameter of type function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
