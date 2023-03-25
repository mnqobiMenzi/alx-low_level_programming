#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - entry
 * @separator: seperator
 * @n: elements
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list al;

	if (separator == NULL || *separator == 0)
		s = "";
	else
		s = (char *) separator;
	va_start(al, n);

	if (n > 0)
		printf("%d", va_arg(al, int));
	for (i = 1; i < n; i++)
		printf("%s%d", s, va_arg(al, int));
	printf("\n");
	va_end(al);
}
