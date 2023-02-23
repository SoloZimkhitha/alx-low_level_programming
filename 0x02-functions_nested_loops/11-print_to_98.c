#include "main.h"
/**
 * print_to_98- print numbers to 98
 *@n:starting point
 * Return: end with value 0
 */
void print_to_98(int n)
{
	int i;
	int j;

	if(n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			for(j = n; j <= 98; j++)
			{	
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
                {
                        for(j = n; j <= 98; j++)
                        {
                                _putchar(i + '0');
                                _putchar(',');
                                _putchar(' ');
                        }
                        _putchar('\n');
                }
	}
}
