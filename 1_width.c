#include "main.h"
/**
 * get_width - Function calculates the width
 * @format: Formatted string
 * @i: List of arguments
 * @list: arguments
 *
 * Return: width
 */
int get_width(const char *format, int *i, va_list list)
{
	int current;
	int width = 0;

	for (current = *i + 1; formazt[current] != '\0'; current++)
	{
		if (is_digit(format[current]))
		{
			width *= 10;
			width += format[current] - '0';
		}
		else if (format[current] == '*')
		{
			current++;
			width = va_arg(list, int);
			break;
		}
		else 
			break;
	}
	*i = current - 1;
	return (width);
}
