#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes character
 * @c: Char
 *
 * Return: On success 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
