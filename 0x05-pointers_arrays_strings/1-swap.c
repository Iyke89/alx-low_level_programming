#include "main.h"

/**
 * swap_int - swaps the value of integers
 * @a: first number
 * @b: second number
 *
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
