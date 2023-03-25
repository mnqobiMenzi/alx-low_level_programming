#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - point
 * @n: inputs
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list al;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(al, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(al, const unsigned int);
	}

	va_end(al);

	return (sum);
}
