#include "calc.h"

/**
 * main - performs basic math operation
 *
 * @argc: number of arguments
 *
 * @argv: array of arguments
 *
 * Return: always zero on success
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	op_t *op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	int result = op->f(num1, num2);
	printf("%d\n", result);

	return (0);
}
