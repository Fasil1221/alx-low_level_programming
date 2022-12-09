#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - c variables if else while 0
 * return: value 0
 */
int main(void)
{
	int num;

	srand(time(0))
	num = rand() - RAND_MAX / 2;

	if (num > 0)
	{
	printf("%d is positive\n", num);
	}
	else if (num < 0)
	{
	printf("%d is negative\n", num);
	}
	else
	{
	printf("%d is zero\n", num);
	}
	return (0);
}
