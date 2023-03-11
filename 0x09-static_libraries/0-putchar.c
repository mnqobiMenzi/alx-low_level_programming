#include <unistd.h>

/**
 * _putchar - write character c
 * @c: The Character to print
 *
 * Return: On success 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
