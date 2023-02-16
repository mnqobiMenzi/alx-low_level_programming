#include <stdio.h>
/**
 * main - C program that prints the size of various types on the computer it is compiled and run on
 * Return 0 (complete)
 */
int main(void)
{
	char x;
	int i;
	long int y;
	long long int j;
	float e;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(j));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
