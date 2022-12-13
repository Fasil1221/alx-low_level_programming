#include "main.h"
/**
*print_last_digit - prints last digit of a number
*@num: the number up for test
*Return: last digit
*/
int print_last_digit(int num)
{
	int do= num % 10;

	if (do < 0)
	{
		do *=-1;
		_putchar(do + '0');
	}
	return (-num);
}
