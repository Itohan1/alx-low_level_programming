#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: parameter
 * Return: 0
 *
 */

int _atoi(char *s)
{
	int n, j, k, q, sl, y;

	j = 0;
	k = 0;
	q = 0;
	sl = 0;
	y = 0;
	n = 0;

	while (s[sl] != '\0')
		sl++;

	while (n < sl && j == 0)
	{
		if (s[n] == '-')
			k++;
		if (s[n] >= '0' && s[n] <= '9')
		{
			q = s[n] - '0';
			if (k % 2)
				q = -q;
			y = y * 10 + q;
			j = 1;
			if (s[n + 1] < '0' || s[n + 1] > '9')
				break;
			j = 0;
		}
		n++;
	}
	if (j == 0)
		return (0);
	return (y);
}

/**
 * main - main function
 * @argc: arguement
 * @argv: vector
 * Return: 0
 *
 */

int main(int argc, char *argv[])
{
	int ans, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	ans = n1 * n2;
	printf("%d\n", ans);

	return (0);
}
