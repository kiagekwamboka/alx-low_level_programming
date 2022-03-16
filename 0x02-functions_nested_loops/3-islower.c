#include "main.h"

/**
 * _islower -prints lowercase
 * Return: always success
 *@c: character to test
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
