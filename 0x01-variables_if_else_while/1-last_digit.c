#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0
 *
 */

int main(void)
{
	int n, Last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	Last_digit = n % 10;
	if (Last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, Last_digit);
	}
	else if (Last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, Last_digit);
	}
	else if (Last_digit < 6 && Last_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, Last_digit);
	}

	printf("\n");

	return (0);
}
