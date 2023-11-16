#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *uint_to_str(unsigned int value);
char *uint_to_octal_str(unsigned int value);
char *uint_to_hex_str(unsigned int value, int uppercase);

/* Function to print unsigned integer*/
int print_unsigned(va_list args) {
    unsigned int value = va_arg(args, unsigned int);

    char *buffer = uint_to_str(value);

    int count = write(1, buffer, strlen(buffer));
    free(buffer);
    return (count);
}

/* Function to print unsigned integer in octal format*/
int print_octal(va_list args) {
    unsigned int value = va_arg(args, unsigned int);

    char *buffer = uint_to_octal_str(value);

    int count = write(1, buffer, strlen(buffer));
    free(buffer);
    return (count);
}

/* Function to print unsigned integer in hexadecimal format*/
int print_hexa(va_list args, int uppercase) {
    unsigned int value = va_arg(args, unsigned int);

    char *buffer = uint_to_hex_str(value, uppercase);

    int count = write(1, buffer, strlen(buffer));
    free(buffer);
    return (count);
}

