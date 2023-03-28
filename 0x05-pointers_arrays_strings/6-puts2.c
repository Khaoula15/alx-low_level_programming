#include "main.h"

/**
 * puts2 - print strings
 * @str: the used string reference
 * Return: 0
 */

void puts2(char *str)
{
	int Z = 0;

	while (str[Z] != '\0')
	{
		if (Z % 2 == 0)
		{
			_putchar(str[Z]);
		}
		Z++;
	}
	_putchar('\n');
}
