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
    char c;
    float f;
    char *s;
    va_list args;
 
    va_start(args, format);
 
    i = 0;

    while (format[i] != '\0')
	{
        switch (format[i])
		{
            case 'c':
                c = (char) va_arg(args, int);
                printf("%c", c);
                break;
            case 'i':
                i = va_arg(args, int);
                printf("%d", i);
                break;
            case 'f':
                f = va_arg(args, double);
                printf("%f", f);
                break;
            case 's':
                s = va_arg(args, char *);
                if (s == NULL)
				{
                    printf("(nil)");
                }
				else
				{
                    printf("%s", s);
                }
                break;
            default:
                break;
        }
        i++;
    }
    printf("\n");
    va_end(args);
}
