#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - print character
 *
 * @format: string
 *
 * Return: 0
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	count = vfprintf(stdout, format, args);
	return (count);
	va_end(args);
}
