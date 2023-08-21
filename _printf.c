#include "main.h"

/**
*_printf - A function that produces output according to a format
*@format: Character string
*Return: The number of characters printed
*(excluding the null byte used to end output to strings)
*/

int _printf(const char *format, ...)
{
	int print_char = 0;

	va_list listofargs;

	if (format == NULL)
		return (-1);

	va_start(listofargs, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			print_char++;
		}
		else
		{
			format++;
			if (*format == '\0')
			break;

		if (*format == '%')
		{
			write(1, format, 1);
			print_char++;
		}

		else if (*format == 'c')
		{
			char c = va_arg(listofargs, int);

			write(1, &c, 1);
			print_char++;
		}

		else if (*format == 's')
		{
			char *str = va_arg(listofargs, char*);
			int str_len = 0;

			write(1, str, str_len);
			print_char = print_char + str_len;
		}
		format++;
		}

		va_end(listofargs);
	}
	 return (print_char);
}
