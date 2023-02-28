#include <stdio.h>

/**
 * print_rev - function to print character in reverse order
 * @s: character reverse
 *
 * Return: always 0
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s)
	{
		s++;
		count++;
	}
	while (count)
	{
		s--;
		putchar(*s);
		count--;
	}
	putchar('\n');
}
