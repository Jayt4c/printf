#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

// Function to handle printing a character
static int printChar(int value) {
    return write(1, &value, 1);
}

// Function to handle printing a string
static int printString(const char *str) {
    return write(1, str, 1);
}

// Function to handle printing an integer
static int printInt(int value) {
    // Implement your logic for printing an integer
    // For example, use printf or write to print the integer
    // ...
    return 0;  // Replace with actual count
}

int _printf(const char *format, ...) {
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format) {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'c':
                    count += printChar(va_arg(args, int));
                    break;
                case 's':
                    count += printString(va_arg(args, char *));
                    break;
                case '%':
                    count += printChar('%');
                    break;
                case 'd':
                case 'i':
                    count += printInt(va_arg(args, int));
                    break;
                default:
                    count += printChar('%');
                    count += printString(format);
                    break;
            }
        } else {
            count += printString(format);
        }
        format++;
    }

    va_end(args);

    return count;
}

