#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: function parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int i, len;

	len = 0;

	while (s[len])
		len++;

	for (i = len - 1 ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
