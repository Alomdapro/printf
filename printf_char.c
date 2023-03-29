#include "main.h"

/**
 * printf_char - prints a char.
 * @ch: arguments get char .
 * Return: 1.
 */
int printf_char(va_list ch)
{
	char s;

	s = va_arg(ch, int);
	_putchar(s);
	return (1);
}
