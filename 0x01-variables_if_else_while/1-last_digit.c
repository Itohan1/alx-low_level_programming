#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>

/* betty style doc for function main goes there */
/**
 * main - process
 *
 * Return: always 0
 */
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastdigit = n % 10;
	if (lastdigit > 5)
		printf("the last digit of %d is %d and is greater than 5", n, lastdigit);
	else if (lastdigit == 0)
		printf("the last digit of %d is %d and is 0", n, lastdigit);
	else if (lastdigit < 6 && lastdigit != 0)
		printf("the last digit of %d is %d and is less than 6 and not 0", n, lastdigit);

	printf("\n");

	return (0);
}
