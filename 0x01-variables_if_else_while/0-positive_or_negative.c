#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */
/**
 * main - start of the program
 * Return: 0 return success
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("is positive");
	else if (n == 0)
		printf("is zero");
	else if (n < 0)
		printf("is negative");
	else
		printf("not valid");
	return (0);
}

