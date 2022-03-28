#include "main.h"

/**
 * _memset - fills memory
 * @s: value
 * @b: value
 * @n: value
 * Return: always a success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
