#include "main.h"
/**
 *_strlen - length off string
 *@s: string value
 *Return: always a success
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	_putchar(len);
	return (0);
}
