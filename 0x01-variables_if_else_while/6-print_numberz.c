#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all single digits
 * of base 10 from 0 to 9.
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
		putchar(digit);

	putchar('\n');

	return (0);
}
