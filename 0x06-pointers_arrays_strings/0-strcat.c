#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: value to be input
 * @dest: value to be input
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (src[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (dest[b] != '\0')
	{
		src[a] = dest[b];
		a++;
		b++;
	}

	dest[b] = '\0';
	return (dest);
}
