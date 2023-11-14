#include "main.h"
#include <stddef.h>
/**
 * get_func - look for the specifier
 * @s: variable for the function
 * Return: function
 */
int (*get_func(char s))(va_list)
{
	int i = 0;
	spec arr[] = {
		{"c", print_c}, {"s", print_s}, {"X", print_HEX},
		{"%", print_percent}, {"d", print_d},
		{"i", print_i}, {"b", print_b}, {"x", print_hex},
		{"o", print_oct}, {"u", print_uns}, {NULL, NULL}
	};
	while (arr[i].valid)
	{
		if (s == arr[i].valid[0])
			return (arr[i].funk);
		i++;
	}
	return (NULL);
}
