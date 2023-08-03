#include "main.h"

/**
 * factorial - the factorial number gets returned
 * @n: number
 *
 * Return:  n is the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
