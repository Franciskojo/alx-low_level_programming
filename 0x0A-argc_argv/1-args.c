#include <stdio.h>
#include "main.h"
/**
 * main - program that prints nunmber of arguments
 * @argc: number of command line
 * @argv: array that contains the program command line
 * Return: (0) successful
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
