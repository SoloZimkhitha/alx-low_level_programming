#include <stdlib.h>
#include "main.h"

int _strlen_recursion(char *s)
{
    int i;

    if(*s == '\0')
    {
        return i;
    }

    i++;
    return _strlen_recursion(s);
}
