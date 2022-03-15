#include <stdio.h>

#include <stdlib.h>

#include <time.h>
#include<main.h>
/**
* main - Entry point
* print_alphabet - prints the alphabet
* Return: Always 0 (Success)
*/
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
		putchar(s);
	putchar('\n');
	getchar();
}
