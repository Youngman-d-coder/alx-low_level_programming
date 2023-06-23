#include "calc.h"

/**
 * op_add - sums a and b
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: returns sum of a and b
 */
int op_add(int a, int b)
{
	int c;

	c = a + b;

	return (c);
}
/**
 * op_sub - differentiates a and b
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: returns difference of a and b
 */
int op_sub(int a, int b)
{
	int c;

	c = a - b;

	return (c);
}
/**
 * op_mul - multiplies a and b
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: returns product of a and b
 */
int op_mul(int a, int b)
{
	int c;

	c = a * b;

	return (c);
}
/**
 * op_div - divides a with b
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: returns result of the division of a by b
 */
int op_div(int a, int b)
{
	int c;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	c = a / b;
	return (c);
}
/**
 * op_mod - modulo a and b
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: returns remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	int c;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	c = a % b;
	return (c);
}
