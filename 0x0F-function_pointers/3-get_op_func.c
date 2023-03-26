#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * get_op_func - gets an operation
 * @s: parameter of type function pointer
 * Return: a pointer to a function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL && strcmp(ops[i].op, s) != 0)
	{
		i++;
	}

	return (ops[i].f);
}
