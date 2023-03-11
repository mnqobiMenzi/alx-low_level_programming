#include "main.h"
/**
 *_memcpy - copy memory area
 *@dest: memory store
 *@src: memory copy
 *@n: number of bytes
 *
 *Return: memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
