#include "main.h"

/**
 * _printf - prints a formatted string
 * @format: character string for desired output
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	int c = 0;
	size_t i = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			switch (format[i])
			{
				case 'c':
					c += _putchar(va_arg(args, int));
					break;
				case 's': {
					char *s = va_arg(args, char *);

					while (*s)
						c += _putchar(*s++);
					break;
				}
				case '%':
					c += _putchar('%');
					break;
				default:
					c += _putchar('%');
					continue;
			}
		}
		else
			c += _putchar(format[i]);
	}
	va_end(args);
	return (c);
