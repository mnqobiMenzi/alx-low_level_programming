#include "main.h"

/**
 * _put_recursion - String followed by a new line.
 * @s: string variable
 * Return: 1 on Success
 */

void _put_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
