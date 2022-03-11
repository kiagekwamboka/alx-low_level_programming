#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int d;

	char s;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (s = 'a'; s <= 'f'; s++)
		putchar(s);
	putchar('\n');
	return (0);
}
