#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _printf - printf function
 *
 * @format: string
 *
 * Return: 0
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd')
			{
				int i = atoi(format);

				i = va_arg(args, int);
				write(1, &i, 1);
				count++;
			}
			else if (*format == 'i')
			{
				signed int i = atoi(format);

				i = va_arg(args, int);
				write(1, &i, 1);
				count++;
			}
			else
				write(1, format, 1);
			format++;
		}
	}
	va_end(args);
	return (count);
}
