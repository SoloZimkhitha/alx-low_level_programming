#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all -  prints anything
 * @format: parameter of type char
 * Return: 0
 */
void print_all(const char * const format, ...)
{
    int i;
    char *s, *sep = "";
    va_list args;
 	
    va_start(args, format);
 	i = 0;
    if (format)
    {
	    while (format[i])
	{
        switch (format[i])
		{
            case 'c':
                printf("%s%c", sep, va_arg(args, int));
                break;
            case 'i':
                printf(" %s%d", sep, va_arg(args, int));
                break;
            case 'f':
                printf("%s%f", sep, va_arg(args, double));
                break;
            case 's':
                s = va_arg(args, char *);
                if (!s)
		{
			s = "(nil)";
		    printf("%s%s", sep, s);
		}
		    break;
            default:
               i++;
       continue;
       }
        sep = ", ";
	i++;
    }
    printf("\n");
    va_end(args);
}
}
