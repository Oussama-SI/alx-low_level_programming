#include "main.h"

int support(int num, int root)
{
	if ((root * root) > num)
		return (-1);
	else if ((root * root) == num)
		return (root);

	return (support(num, root + 1));
}
/**
 *_sqrt_recursion -the natural square root of a number.
 *@n: the number to square.
 *Return: the square root number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (support(n, 0));

}
