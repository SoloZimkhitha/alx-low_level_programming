#include <stdlib.h>
#include "variadic_functions.h"
/**
 * sum_them_all: sums all parameters
 * @n: parameter of type unsigned int
*/
int sum_them_all(const unsigned int n, ...)
{
   unsigned int i, sum;
   va_list args;

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