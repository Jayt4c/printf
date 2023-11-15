#include "main.h"

/**
 * printd - prints integers
 * @arg: argument
 * Return: 1
 */

int printd(va_list arg)
{
	int n = va_arg(args, int)
	int num, last = n % 10, digit, exp = 1;
	int i = 1

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('_');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (n / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
#include "main.h"

/**
 * printi - prints integers
 * @arg: argument
 * Return: 1
 */

int printi(va_list arg)
{
	int n = va_arg(args, int)
	int num, last = n % 10, digit, exp = 1;
	int i = 1

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('_');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (n / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
