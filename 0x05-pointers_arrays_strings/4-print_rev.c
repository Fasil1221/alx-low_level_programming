#include "main.h"
/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: char
 */
void print_rev(char *s)
{
	int i;
	int j = 0;

	while (*s != '\0')
	{
		s++;
		j++;
	}

	s--;

	for (i = j; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
