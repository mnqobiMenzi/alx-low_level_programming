#include "main.h"

/**
 * _memcpy - copybyte from memory
 * @dest: destination value
 *@src: Og value
 *@n: limit
 *Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *c = src;
	char *y = dest;

	while (n != 0)
	{
		*y++ = *c++;
		n--;
	}
	return (dest);
}
