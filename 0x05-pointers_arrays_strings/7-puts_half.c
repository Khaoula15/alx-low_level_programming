#include "main.h"

/**
 * puts_half - prints xters of a string
 * @str: the used string reference
 * Return: 0
 */

void puts_half(char *str)
{
	int i, n, len;

	len = 0;

	while (str[len])
		len++;

	n = (len + 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
