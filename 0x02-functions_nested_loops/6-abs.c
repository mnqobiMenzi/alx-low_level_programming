#include "main.h"

/**
 *_abs -  absolute value of an integer
 *
 *@x: The variable tahat stores a number
 *
 *Return: @x absolute value
 */

int _abs(int x)
{
	if (x < 0)
		x = -(x);
	else if (x >= 0)
		x = x;
	return (x);
}
