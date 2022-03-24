#include "main.h"
/**
 * *_strcat -joins strings
 * @dest: character value
 * @src: character value
 * Return: always a success
 */
char *_strcat(char *dest, char *src)
{
	*dest = *dest + *src;
	return (0);
}
