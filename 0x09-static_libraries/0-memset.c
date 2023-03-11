#include "main.h"

/**
 * _memset - fill a memory block
 *@s: address memeory
 *@b: the value
 *@n: number of bytes
 *
 *Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
