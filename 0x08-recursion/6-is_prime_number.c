#include "main.h"

int prime_num(int n, int i)
{
    if (n == i)
    return (1);
    if (n % i)
    return (0);

    return (prime_num(n, i + 1));
     

}
int is_prime_number (int n)
{
    if (n < 0 || n == 1)
    return (0);

    return (prime_num(n, 2));
}