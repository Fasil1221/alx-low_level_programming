#include "main.h"
/**
*print_last_digit - prints last digit of a number
*@num: the number up for test
*Return: last digit
*/
int print_last_digit(int num)
{
	int ld = num % 10;

	if (ld < 0)
	
		ld *= -1;
		_putchar(ld + '0');

	return (0);
}
