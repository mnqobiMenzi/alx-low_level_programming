#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence
 * function  is executed
 */

void first(void)
{
	printf("Your're best! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
