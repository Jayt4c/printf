#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
/**
 * struct specifier - struct specifier
 * @valid: the wanted character.
 * @f: the functions related.
 *
 */
typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int print_b(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_oct(va_list args);
int print_uns(va_list args);
int _putchar(char c);
int print_percent(va_list args);
int (*get_func(char x))(va_list args);
#endif
