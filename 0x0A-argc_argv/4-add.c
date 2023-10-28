#include "main.h"
#include "string.h"
#include "stdlib.h"
#include "ctype.h"

/**
 * _number - number ckecker
 * @s: parameter
 * Return: 0
 *
 */

int _number(char *s)
{
	unsigned int i;

	i = 0;
	while (i < strlen(s))
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - main function
 * @argc: arguement
 * @argv: vector
 * Return: (0)
 *
 */

int main(int argc, char *argv[])
{
	int i;
	int add;
	int join;

	i = 1;
	while (i < argc)
	{
	if (_number(argv[i]))
	{
	join = atoi(argv[i]);
	add = add + join;
	}
		else
		{
		printf("Error\n");
		return (1);
		}
		i++;
	}
	printf("%d\n", add);
	return (0);
}
