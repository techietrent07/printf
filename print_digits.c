#include "main.h"

/**
 * dc - A function that collects int value and calls function to print.
 * @arg: Argument value
 *
 * Return: Length of integer.
 */

int dc(va_list arg)
{
	long int k = va_arg(arg, int);
	long int n;

	n = print_dig(k, 0);

	return (n);
}


/**
 * print_dig - A function that prints signed integers.
 * @k: The integer to be printed
 * @n: Length of integer to be printed.
 *
 * Return: length of integer (n)
 */

int print_dig(long int k, long int n)
{
	if (k < 0)
	{
		_putchar('-');
		k = -k;
		n++;
	}

	if (k / 10)
	{
		n = print_dig(k / 10, n++);
	}
	_putchar(k % 10 + '0');
	n++;

	return (n);
}


/**
 * dcu - A function that collects int value and calls function to print.
 * @arg: Argument value.
 *
 * Return: length of integer (n).
 */
int dcu(va_list arg)
{
	long int k = va_arg(arg, int);
	long int n;

	n = print_dig_u(k, 0);

	return (n);
}


/**
 * print_dig_u - A function that prints unsigned integers.
 * @k: The integer to be printed
 * @n: The length of integer
 *
 * Return: length of integer (n).
 */
int print_dig_u(long int k, long int n)
{
	if (k < 0)
	{
		k = -k;
		n++;
	}

	if (k / 10)
	{
		n = print_dig_u(k / 10, n++);
	}
	_putchar(k % 10 + '0');
	n++;

	return (n);
}
