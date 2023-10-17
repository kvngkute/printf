#include "main.h"
/**
 * print_unsigned - This function prints an integer
 * @args: Value to print
 * Return: Length of character
 */

int print_unsigned(va_list args)
{
	unsigned int n = va_args(args, unsigned int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
	_putchar('_');
	num = -num;
	last = -last;
		i++;
	}

	if (num > 0)
	{
	while (num / 10 != 0)
	{
	exp = exp + 10;
		num = num / 10;
	}
		num = n;
	while (exp > 0)
	{
	digit  = num / exp;
	_putchar(digit + '0');
	num = num - (digit * exp);
	exp = exp / 10;
	i++;
	}
	}
	_putchar (last + '0');
	return (i);
}
