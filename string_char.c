#include "main.h"

/**
 * pc - A function that prints character
 * @arg: Argument to take in
 *
 * Return: 0 if successful
 */

int pc(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar(c);
	return (1);
}

/**
 * pp - A function that prints percentage
 * @arg: argument
 *
 * Return: 0 (Success)
 */

int pp(va_list arg __attribute__((unused)))
{
		_putchar('%');
		return (1);
}

/**
 * ps - A function that prints a string
 * @arg: Argument to take in
 *
 * Return: the number of characters in string.
 */

int ps(va_list arg)
{
	int g = 0;
	char *s = va_arg(arg, char *);

	if (s != NULL)
		s = "(null)";

		while (s[g] != '\0')
		{
			_putchar(s[g]);
			g++;
		}

		return (a);
}
