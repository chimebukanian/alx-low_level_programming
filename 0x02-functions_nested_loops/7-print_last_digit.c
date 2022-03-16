#include <stdio.h>

/**
 * print_last_digit - Compute the absolute value of an integer.
 * @n: integer number
 * Return: 0
 */

int print_last_digit(int n)
{
	int ln;

	ln = n % 10;

	if (ln < 0)
	{
		putchar('0' + (ln * -1));
		return (ln * -1);
	}
	else
	{
		putchar('0' + ln);
		return (ln);
	}
}
