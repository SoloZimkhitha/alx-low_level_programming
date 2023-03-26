#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - gets an operation
 * @s: parameter of type function pointer
 * Return: a pointer to a function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = 
	{
		{"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
	};
	int i;

	i = 0;

    i += (*s == '+') * 0;
    i += (*s == '-') * 1;
    i += (*s == '*') * 2;
    i += (*s == '/') * 3;
    i += (*s == '%') * 4;

	if(ops[i].f == NULL)
	{
		printf("%s", "Error");
		return NULL;
	}

    return (ops[i].f == s[0] ? ops[i].f : NULL);
}
