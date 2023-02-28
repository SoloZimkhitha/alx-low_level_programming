#include "main.h"
#include<stdio.h>
#include<string.h>
/**
*_strcpy - copies the string
*
*@dest: parameter of type character
*@src: parameter of type character
*Return: 0
*/
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
