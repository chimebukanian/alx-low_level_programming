#include <stdio.h>
#include "main.h"
/**
 * print_sign - Print the sign of a number
 * @n: Number to check
 * Return: 1 if n is positive, 0 if n is 0 and -1 if n is less than 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
