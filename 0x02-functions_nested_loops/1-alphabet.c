#include "main.h"
/**
 * print_alphabet - print alphabets, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char SL;

	for (SL = 'a'; SL <= 'z'; SL++)
	{
		_putchar(SL);
		_putchar('\n');
	}

}

