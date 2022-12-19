#include "main.h"
/**
 * _strlen - is a function that returns the length of a string.
 * @s: is an integer
 * Return: i
 */
int _strlen(char *s)
{
int i;

for (i = 0; ; i++)
{

if (*s == '\0')
{
	break;
}
s++;
}
return (i);
}
