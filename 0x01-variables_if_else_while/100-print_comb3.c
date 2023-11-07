#include <stdio.h>

/**
 * main -  program that prints all possible different combinations of 2 digits
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int j = 1;

	if (i < 9 && j <= 9)
	{
		for (i = 0 ; i <= 8 ; i++)
		for (j = 1 ; j <= 9 ; j++)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i < 8 && j <= 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
