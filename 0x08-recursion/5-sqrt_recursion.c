#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion
 * @n: given number
 * @square: test number
 * Return: sqrt
 */
int _sqrt(int n, int sqr)
{
	if (n < 0)
		return (-1);
	if ((sqr * sqr) > n)
		return (-1);
	if (sqr * sqr == n)
		return (sqr);
	return (_sqrt(n, sqr + 1));
}
