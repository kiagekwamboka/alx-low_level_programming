#include "main.h"
/**
 *_isupper - uppercase
 *@c: test value
 *Return: alwas a success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
