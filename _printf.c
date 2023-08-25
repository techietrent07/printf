#include "main.h"

/**
 * _printf - A function to try and replicate printf
 * @format: The format to be printed.
 *
 * Return: 0 (Success)
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i, j, no_c = 0;

	print_d data[] = {
		{"c", pc}, {"s", ps}, {"%", pp}, {"d", dc}, {"u", dcu}, {"i", dc},
		{"b", bc}, {"S", ps}
	};

	va_start(arg, format);
	if (!format)
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			no_c++;
		}
		else
		{
			if (!format[i + 1] || format[i + 1] == ' ')
				return (-1);
			for (j = 0; j < 8; j++)
			{
				if (format[i + 1] == *(data[j].c))
					break;
			}
			if (j < 8) 
			{
				no_c = no_c + data[j].f_pr(arg);
				i++;
			}
			else
			{
				_putchar(format[i]);
				no_c++;
			}
		}
	}
	va_end(arg);
	return (no_c);
}
