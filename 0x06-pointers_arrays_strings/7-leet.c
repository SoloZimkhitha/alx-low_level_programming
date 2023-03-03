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
	int i, j, l;
	char chars[5][3] = {
        {'a', 'A', '4'},
        {'e', 'E', '3'},
        {'o', 'O', '1'},
        {'t', 'T', '0'},
        {'l', 'L', '7'}};

	l = strlen(c);

	for (i = 0; c[i] < l; i++)
	{
        	for (j = 0; j < 5; j++)
		{
            		if (c[i] == chars[j][0] || c[i] == chars[j][1])
			{
                		c[i] = chars[j][2];
                		break;
            		}
        	}
	}
	return (c);
}
