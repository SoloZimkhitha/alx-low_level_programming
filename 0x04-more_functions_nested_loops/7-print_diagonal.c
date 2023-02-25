#include "main.h"
/**
 * print_diagonal- draws diagonal line
 *
 * @n: parameter of type integer
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;
    	int j;
    
   	if (n <= 0)
   	{
        	_putchar('\n');
    	}

	for (i = 0; i < n; i++)
    	{
        	for (j = 0; j <= i; j++)
        	{
            		if (j == i)
            		{
                		_putchar(92);
            		}
            		else
            		{
                		_putchar(32);
            		}
        	}
        	_putchar('\n');
    	}
}
