#include "main.h"

/**
 * main - Entry point
 *
 * description - prints the alphabets - it prints it  in lower case
 * 
 * Return: Always 0;
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
