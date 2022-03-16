#include "main.h"
/**
 * print_alphabet_x10 - print 10 times
 * Return: always a  success
 */
void print_alphabet_x10(void)
{
	char s;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (s = 'a'; s <= 'z'; s++)
			_putchar(s);
	}
		_putchar('\n');
}
