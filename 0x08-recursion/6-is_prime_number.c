#include "main.h"

/**
 * prime_num -  that returns 1 if prime number otherwise 0
 * @n: parameter of type integer
 * @i: parameter of type integer
 * Return: 1 or 0
*/

int prime_num(int n, int i)
{
    if (n == i)
    return (1);
    if (n % i == 0)
    return (0);

    return (prime_num(n, i + 1));
     

}
/**
 * _prime_number -  that returns 1 if prime number  otherwise 0
 * @n: parameter of type integer
 * @i: parameter of type integer
 * Return: 1 or 0
*/
int is_prime_number (int n)
{
    if (n < 0 || n == 1)
    return (0);

    return (prime_num(n, 2));
}