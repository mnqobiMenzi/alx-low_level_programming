#include "main.h"

/**
 *swap_int - Swap inte values
 *@a: Integer value
 *@b: Integer value
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
