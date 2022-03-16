#include "main.h"
/**
 * print_last_digit -prints no
 * @i: value to be computed
 * Return: always a success
 */
int print_last_digit(int i)
{
	if (i < 0)
		i = i * -1;
	_putchar((i % 10) + '0');
	return (i % 10);
}
