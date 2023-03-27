#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings -  prints strings
 * @separator: parameter of type pointer
 * @n: parameter of type n
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *s;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
