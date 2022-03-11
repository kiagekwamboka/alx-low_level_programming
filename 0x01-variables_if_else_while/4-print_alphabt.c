#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	char s, e, q;

	e = 'e';

	q = 'q';

	for (s = 'a'; s <= 'z'; s++)
	{
		if (s != e && s != q)
			putchar(s);
	}
	printf("\n");

	return (0);
}
