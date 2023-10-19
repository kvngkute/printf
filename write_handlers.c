#include "main.h"
/**
 * handle_write_char - prints a string
 * @c: char types
 * @buffer: Buffer array to handle
 * @flags: Caluclates active flags
 * @width: get width
 * @precision: precision specifier
 * @size: size specifier
 * Return: Number of characters printed
 */
int handle_write_char(char c, char buffer[], int flags, int width, int precision, int size)
{	/* char is stored at left and paddind at buffer's right */
	int i = 0;
	char padd = ' ';

	UNUSED(precision);
	UNUSED(size);

	if (flags & F_ZERO)
		padd = '0';

	buffer[i++] = c;
	buffer[i] = '\0';

	if (width > 1)
	{
		buffer[BUFF_SIZE - 1] = '\0';
		for (i = 0; i < width - 1; i++)
			buffer[BUFF_SIZE - i - 2] = padd;

		if (flags & F_MINUS)
			return (write(1, &buffer[0], 1) +
					write(1, &buffer[BUFF_SIZE - i - 1], width - 1));
		else
			return (write(1, &buffer[BUFF_SIZE - i - 1], width - 1) +
					write(1, &buffer[0], 1));
	}

	return (write(1, &buffer[0], 1));
}
