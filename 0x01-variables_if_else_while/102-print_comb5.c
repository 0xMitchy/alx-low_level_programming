#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all possible
 * combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit1, digit2;

	for (digit = 0; digit <= 98; digit++)
	{
		for (digit2 = digit1 + 1; digit2 <= 99; digit2++)
		{
			putchar((digit1 / 10) + '0');
			putchar((digit1 % 10) + '0');
			putchar(' ');
			putchar((digit2 / 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 98 && digit2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}