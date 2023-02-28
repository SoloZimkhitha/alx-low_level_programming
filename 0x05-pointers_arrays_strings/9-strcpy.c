#include "main.h"
#include<stdio.h>
#include<string.h>
/**
*_strcpy - copies the string
*
*Return: 0
*/
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = strlen(src);

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	
	return(dest);
}
