#include "main.h"
/**
 * _islower - going to cheek if the char is lc
 * Return: 1 if the char is  LC, else 0
 */
int _islower(void)
{
	char c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
