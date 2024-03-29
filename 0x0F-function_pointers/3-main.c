#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <stddef.h>

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
	       	return (1);
	}

	num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
	
	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
        	printf("Error\n");
        	return (1);
	}

	result = operation(num1, num2);
	printf("%d\n", result);
	return (0);
}
