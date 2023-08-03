#include <stdio.h>
#include "main.h"
/**
 *factorial-returm the factorial of a number
 *@n:number to return the factorial
 *
 * return:factorial result of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
