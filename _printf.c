#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - printf function
 * @format: Format string
 * @...: More arguments
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
            case 'c':
		    {
			    int value = va_arg(args, int);
			    count += write(1, &value, 1);
		    }
                break;
            case 's':
                count += write(1, va_arg(args, char *), 1);
                break;
            case '%':
                count += write(1, "%", 1);
                break;
	    case 'd':
	    case 'i':
		count += print_int(va_arg(args, int));
		break;
            default:
                count += write(1, "%", 1);
                count += write(1, format, 1);
                break;
            }
        }
        else
        {
            count += write(1, format, 1);
        }
        format++;
    }

    va_end(args);

    return count;
}

