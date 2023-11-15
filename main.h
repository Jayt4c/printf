#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct format
{
    char *ph;
    int (*fp)();
} Hind;

int _putchar(char c);
int _printf(const char *format, ...);
int print_int(int num);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *s);
int _strlenconst(char *s);
int print_37(void);
int printd(va_list arg);
int printi(va_list arg);
int printb(va_list val);
int print_unsigned(va_list arg);
int print_octa(va_list val);
int print_hexa(va_list val);
int print_HEXA(va_list val);
int print_HEX_more(unsigned int q);
int print_pointer(va_list val);
void print_rev(va_list val);
int print_rot13(va_list val);
int print_hex_more(unsigned long int i);

#endif

