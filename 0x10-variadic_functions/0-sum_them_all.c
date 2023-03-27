<<<<<<< HEAD
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	if (n == 0)
	{
		return 0;
	}
	va_start(args,n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
=======
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * sum_them_all: sums all parameters
 * @n: parameter of type unsigned int
*/
int sum_them_all(const unsigned int n, ...)
{
   unsigned int i, sum;

    if (n == 0)
    {
        return(0);
    }

    sum = 0;

    for (i = 0; i < n; i++)
    {
        sum += va_arg(args, int)
    }
    va_end(args);
        return (sum);
}
>>>>>>> 9f8b06cb86851972186fa68cf34647258f1fc22b
