#include "main.h"

/**
 * _print_rev_recursion - Print string
 * @s: string value
 * Return: 1 Success
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
