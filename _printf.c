#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _printf - prints formatted output to stdout
 * @format: format string containing format specifiers
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	if (format == NULL)
		return (-1);

	va_list args;
	va_start(args, format);

	int count = 0;
	for (int i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				count += putchar('%');
				i++;
			}
			else
			{
				int (*m)(va_list) = get_func(format[i + 1]);
				if (m)
					count += m(args);
				else
				{
					count += putchar('%');
					count += putchar(format[i + 1]);
				}
				i++;
			}
		}
		else
		{
			count += putchar(format[i]);
		}
	}

	va_end(args);
	return (count);
}
