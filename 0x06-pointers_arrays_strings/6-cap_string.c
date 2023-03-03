#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * cap_string - capitalizes all words of a string
 * @c: parameter of type character
 * Return: 0
 */
char *cap_string(char *c)
{
	char *str;
	int i;
	int length;
	int new_word;

	str = c;
	i = 0;
	length = strlen(c);
	new_word = 1;

	while (i < length) 
	{
        if (str[i] == ' '||
	str[i] == '\t' || 
	str[i] == '\n'|| 
	str[i] == ';' || 
	str[i] == '!' ||
	str[i] == '?' ||
      	str[i] == '"' ||
	str[i] == '(' || 
	str[i] == ')' ||	
	str[i] == '{' || 
	str[i] == '}') 
	{
            new_word = 1;
        }
       	else if (new_word)
	{
            str[i] = toupper(str[i]);
            new_word = 0;
        }
        i++;
	}

	return (str);
}
