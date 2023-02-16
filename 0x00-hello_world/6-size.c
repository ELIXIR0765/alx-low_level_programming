#include <stdio.h>
/**
 * main - A programe that prints the sixe of various computer types
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float e;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of int: %lu byte(S)\n", (unsigned long)sizeof(b));
printf("size of long int: %lu byte(S)\n", (unsigned long)sizeof(c));
printf("size of long long: %lu byte(S)\n", (unsigned long)sizeof(d));
printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
