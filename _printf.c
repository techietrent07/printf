#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - A function that produces output according to a format.
 * @format: Character string
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings).
 */
int _printf(const char *format, ...)
{
	int i, pr = 0, print_char = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list_of_args;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list_of_args, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/* write(1, &format[i], 1);*/
			print_char++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			pr = handle_print(format, &i, list, buffer,
				flags, width, precision, size);
			if (pr == -1)
				return (-1);
			print_char += pr;
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(list_of_args);

	return (print_char);
}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}

