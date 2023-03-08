#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: parameter of type character
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
    if (*s == '\0') {
        return;
    }
    reverse(s+1);
    _putchar(*s);
}
