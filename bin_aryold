#include "main.h"

/**
 * bc - converts to int
 * @arg: argument to take in
 *
 * Return: return n = number of integers.
 */
int bc(va_list arg)
{
	long int k = va_arg(arg, int);
	long int n;

	n = print_binary(k, 0);

	return (n);
}

/**
 * print_binary - print binary number
 * @k: integer to be converted and printed.
 * @n: length of the binary
 *
 * Return: n is number of binary numbers
 */
int print_binary(long int k, long int n)
{
	if (k > 1)
	{
		n = print_binary(k / 2, n++);
	}
	_putchar(k % 2 + '0');
	n++;
	return (n);
}
