#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- assigns a random number
 *
 * Return: end with value 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
        {
                printf("Last digit of %d is %d\n", n, n % 10);
        }
        else if ((n % 10) == 0)
        {
                printf("Last digit of %d is %d\n", n, n % 10);
        }
        else if ((n % 10) < 6 && (n % 10)!= 0)
        {
                printf("Last digit of %d is %d\n", n, n % 10);
        }
	return (0);
}
