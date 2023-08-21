#include "main.h"
/**
 *swap_int - function that swaps values of two intergers
 *@a: value 1
 *@b: value 2
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}

