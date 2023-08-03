#include <math.h>
#include "main.h"
#include <stdio.h>
/**
 * pow_recursion- return the value of x raised to the power of y
 * @x:the number to raised
 * @y:the power of x
 * return:the number pow for x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y != 0)
		return (x * _pow_recursion(x, y - 1));
				else
				return (1);
}
