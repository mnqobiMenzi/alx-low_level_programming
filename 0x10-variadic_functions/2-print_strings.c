#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - entry
 * @separator: value
 * @n: elements
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s, *p;
	unsigned int i;
	va_list al;

	if (separator == NULL || *separator == 0)
		s = "";
	else
		s = (char *) separator;
	va_start(al, n);

	if (n > 0)
		printf("%s", va_arg(al, char *));
	for (i = 1; i < n; i++)
	{
		p = va_arg(al, char*);
		if (p == NULL)
			p = "(nil)";
		printf("%s%s", s, p);
	}
	printf("\n");
	va_end(al);
}
