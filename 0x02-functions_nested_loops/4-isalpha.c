#include "main.h"
/**
 * _islower - going to cheek if the char is lc and UC
 * @c: char
 * Return: 1 if the char is LC or UC, else 0
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

