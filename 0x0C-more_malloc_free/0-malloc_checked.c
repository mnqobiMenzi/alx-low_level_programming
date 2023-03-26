#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checkd - Allocates memory
  * @b: the size to allocate
  *
  * Return: Nothing.
  */
void *malloc_checkd(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
