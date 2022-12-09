#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
<<<<<<< HEAD
 * main - will print
 * Return: value 0
=======
 * main -prints if the number is positive,negative or 0
 * Return: always 0
>>>>>>> f4c1ae2e8bce31206140fa9d07e8f7f5c80acf7c
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else
	{
	printf("%d is zero\n", n);
	}
	return (0);
}
