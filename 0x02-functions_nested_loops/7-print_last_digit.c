#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 *
 * @x: value that stores our number
 *
 * Return: Always x
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;

	if (x < 0)
		y = -y;
	return (y);
}
