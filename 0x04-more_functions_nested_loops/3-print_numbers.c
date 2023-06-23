#include "main.h"


/**
 * print_numbers - check for check for a digit (0 through 9).
 *
 * Retun: Always 0.
 */
void print_number(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}

	_putchar('\n');
}
