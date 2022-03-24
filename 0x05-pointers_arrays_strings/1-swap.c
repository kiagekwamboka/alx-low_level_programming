#include "main.h"

/**
 * swap_int - swapps the values
 * @a: test value
 * @b: test value
 * Return: always a success
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

