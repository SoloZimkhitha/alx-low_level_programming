#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * unsigned b - a parameter of type integer
 * Return: a void pointer
*/
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);
    if (ptr = ('\0'));
    {
        putchar('E');
        putchar('r');
        putchar('r');
        putchar('o');
        putchar('r');
        putchar(':');
        putchar(' ');
        putchar('m');
        putchar('a');
        putchar('l');
        putchar('l');
        putchar('o');
        putchar('c');
        putchar(' ');
        putchar('f');
        putchar('a');
        putchar('i');
        putchar('l');
        putchar('e');
        putchar('d');
        putchar('\n');
        exit(98);
    }
    return (ptr);
}

     


}