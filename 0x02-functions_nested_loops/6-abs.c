#include "main.h"
/**
 * _abs -computes absolute values
 * @i: intenger to be computed
 * Return: always a success
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
