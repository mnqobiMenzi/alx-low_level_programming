#include "main.h"
#include <unistd.h>
/**
 * _putchar - this function writes the character c to stdout
 * @c: This points to the character
 *
 * Return: 1 complete
 * On error,  -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}