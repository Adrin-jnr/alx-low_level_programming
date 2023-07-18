#include "main.h"
#include <stdio.h>


/**
 * add - Adds two integers and returns the result
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of a and b
 */
int add(int a, int b)
{
	int sum = a + b;
	printf("The sum of %d and %d is: %d\n", a, b, sum);
	return sum;
}
