/** 
 * the_runner - returns the natural square root of a number
 * @n: parameter of type integer
 * @i: parameter of type integer
 * Return: -1 or the sqrt
*/
int the_runner(int n, int i)
{
    if (i * i > n)
        return (-1);
    if (i * i == n)
        return (i);
    return (the_runner (n, i + 1)); 
}

/** 
 * _sqrt_recursion - returns the natural square root of a number
 * @n: parameter of type integer
 * Return: -1 or sqrt
*/
int _sqrt_recursion(int n)
{
    return (the_runner(n, 0));
}