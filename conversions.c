#include <stdlib.h>
#include <stdio.h>
/**
 * _printf - char functions
 *
 * Return: return buffer
 */

char *uint_to_str(unsigned int value)
{
	int num_digits = snprintf(NULL, 0, "%u", value);
	char *buffer = (char *)malloc(num_digits + 1);

	if (buffer == NULL)
	{
		exit(EXIT_FAILURE);
	}

	sprintf(buffer, "%u", value);

	return (buffer);
}

char *uint_to_octal_str(unsigned int value)
{
	int num_digits = snprintf(NULL, 0, "%o", value);
	char *buffer = (char *)malloc(num_digits + 1);

	if (buffer == NULL)
	{
		exit(EXIT_FAILURE);
	}

	sprintf(buffer, "%o", value);

	return (buffer);
}

char *uint_to_hex_str(unsigned int value, int uppercase)
{
	int num_digits = snprintf(NULL, 0, uppercase ? "%X" : "%x", value);
	char *buffer = (char *)malloc(num_digits + 1);

	if (buffer == NULL)
	{
		exit(EXIT_FAILURE);
	}

	sprintf(buffer, uppercase ? "%X" : "%x", value);

	return (buffer);
}

