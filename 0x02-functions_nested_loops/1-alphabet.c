#include "main.h"

/**
 * main - Prints the alphabet in lower case
 * Return: Always 0
 *
 */

int main(void)
{
	char letters;

	/* prints lower case letters */

	for (letters = 'a'; letters <= 'z'; letters++)

	_putchar(letters);
	_putchar('\n');
	
	return (0);
}
