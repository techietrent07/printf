#include "main.h"

/**
 * pc - print char
 * @arg: argument
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
 * pp - print percentage
 * @arg: argument
 *
 * Return: 0 if successful
 */
int pp(va_list arg __attribute__((unused)))
{
	_putchar('%');
	return (1);
}

/**
 * ps - print string
 * @arg: argument
 *
 * Return: a - 1 the number of characters in string.
 */
int ps(va_list arg)
{
	int a = 0;
	char *s = va_arg(arg, char *);

	if (!s)
		s = "(null)";

	while (s[a] != '\0')
	{
		_putchar(s[a]);
		a++;
	}

	return (a);
}

