#include "main.h"

/**
 * bc - converts to int
 * @arg: argument to take in
 *
 * Return: return n = number of integers.
 */
int bc(va_list arg)
{
	long int check = 1, i = 0;
	long int k = va_arg(arg, int), w = k;
	int n = 0;

	if (k == 0)
	{
		_putchar('0');
		return (1);
	}

	while (w > 0)
	{
		i++;
		w = w >> 1;
	}

	check = check << (i - 1);

	for (; i > 0; i--)
	{
		if (k & check)
		{
			_putchar('1');
			n++;
		}
		else
		{
			_putchar('0');
			n++;
		}
		check = check >> 1;
	}
	return (n);
}
