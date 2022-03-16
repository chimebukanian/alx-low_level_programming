#include <stdio.h>

/**
 * times_table - description
 */

void times_table(void)
{
	int num1, num2, r;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			r = num1 * num2;

			if (r < 10)
			{
				if (num2 > 0)
					putchar(' ');
				putchar('0' + r);
			}
			else
			{
				putchar('0' + (r / 10));
				putchar('0' + (r % 10));
			}

			if (num2 < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}

		putchar('\n');
	}
}
