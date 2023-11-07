#include <stdio.h>

/**
 * main - main function
 * Return: 0
 *
 */

int main(void)
{
	int i = 0;
	int j = 1;
	int k = 2;

	if (i < 8 && j < 9 && k <= 9)
	{
		for (i = 0 ; i < 8 ; i++)
		for (j = 1 ; j < 9 ; j++)
		for (k = 2 ; k <= 9 ; k++)
		{
			if (i < j && j < k)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i < 7 && j <= 8 && k <= 9)
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
