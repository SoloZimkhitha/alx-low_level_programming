#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * char *leet -  encodes a string
 *
 * Return: 0
 */
char *leet(char *c)
{
	char chars[5][3] = {
        {'a', 'A', '4'},
        {'e', 'E', '3'},
        {'i', 'I', '1'},
        {'o', 'O', '0'},
        {'s', 'S', '5'}};

	for (int i = 0; i < strlen(c); i++)
	{
        	for (int j = 0; j < 5; j++)
		{
            		if (c[i] == chars[j][0] c[i] == chars[j][1])
			{
                		c[i] = chars[j][2];
                		break;
            		}
        	}
	}
	return (c);
}
