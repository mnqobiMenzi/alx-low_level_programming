#include <unistd.h>

/**
 * _putchar - write charcter
 * @c: character
 * Return: character c
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
