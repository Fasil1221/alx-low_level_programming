#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int i = 0;

while (s[i])
{
if (s[i] == c)
return (&s[i]);
i++;
}
return (0);
}
