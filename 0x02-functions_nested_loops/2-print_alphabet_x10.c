#include "main.h"
/*
 * void print_alphabet_x10 -  prints 10 times the alphabet,
 * followed by, a new line
 */
	void print_alphabet_x10 (void);
{
	int tn;
	char SL;

	for (tn = 0; tn <= 9; tn++)
	{
		for (SL = 'a'; SL <= 'z'; SL++)
		{
			_putchar(SL);
		}
	_putchar('\n');
	}

}
