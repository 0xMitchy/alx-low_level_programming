#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints
 * all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	int hexes;

	for (num = 48; num < 58; num++)
		putchar(num);

	for (hexes = 97; hexes < 103; hexes++)
		putchar(hexes);

	putchar('\n');

	return (0);
}
