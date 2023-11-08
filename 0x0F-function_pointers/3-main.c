#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - main function
 * @argc: first parameter
 * @argv: second parameter
 * Return: 0
 *
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	int i, j;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	op = argv[2];
	j = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && j == 0) || (*op == '%' && j == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(i, j));

	return (0);
}
