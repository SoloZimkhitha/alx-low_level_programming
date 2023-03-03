#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string
 * @c: parameter of type character
 * Return: 0
 */
char *cap_string(char *c)
{
	char *str = c;
	int z = 1;
	
	while (*str != 0)
	{
		if (z)
		{
			z = 0;
		
			if (*str >= 'a' && *str <= 'z')
			{
		 		*str -= 32;
			}	
		}			
	
		if (*str == ' ' || *str == '\t' || *str == '\n'|| *str == ';' || *str == '!' || *str == '?' || '"'||*str == '(' || *str == ')' 
				|| *str == '{' || *str == '}')
		{
			z = 1;
		}
	}
	return ((c));
}
