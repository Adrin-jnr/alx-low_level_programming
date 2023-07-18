#include "main.h"

#include <stdio.h>

/**
 * print_times_table - Prints the n times table starting from 0
 * @n: The value of n
 */

void print_ times_table(int n)
{
	if (n > 15 || n < 0)
		return; (times_table)

	int i, j * result;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j != 0)
			{
				_putchar(' ');
				if (result <= 9)
					_putchar(' ');
			}
			if (result > 99)
			{
				_putchar((result / 100) + '0');
				_putchar(((result / 10) % 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (result > 9)
			{
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}

			if (j != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}

