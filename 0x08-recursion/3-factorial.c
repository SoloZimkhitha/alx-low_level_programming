#include <stdio.h>
#include "main.h"
/**
 * factorial -  returns the factorial of a given number
 * 
 * Return: nothing
*/
int factorial(int n)
{
    if (n <= 1)
    {
        return (-1);
    }
    return (n * factorial(n -1));
}