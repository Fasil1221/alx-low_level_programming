#include "main.h"
/**
 * _isupper - checks if parameter is an uppercase character
 *  @c: inpute character
 *  Return: 1 if the char is uppercase, 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
