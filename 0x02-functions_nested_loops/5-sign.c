#include "main.h"
/**
*print_sign - prints the sign of a number
*@num: the number up for test
*Return: 1 0 or -1 or positive zero and negative res
*/
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
