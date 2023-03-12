#include <stdlib.h>
#include <stdio.h>

/**
 * main -  prints a number followed by a new line
 * argc: parameter of type integer
 * argv: parameter of type character
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
        printf("argc = %d\n", argc - 1);
        return (argc - 1);
}
