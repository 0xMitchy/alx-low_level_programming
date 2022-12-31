#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * A program that generates random numbers and prints them out
 *
 * Return: 0 Always(Success)
 */

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}

	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}

	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf
		("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}

	return (0);
}
