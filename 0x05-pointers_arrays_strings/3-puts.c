#include "main.h"
/**
 * _puts - prints a string,followed by a new line, to stdout
 * @str: stringg to be printed
 *
 * Return: always 0
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchsr(*str);
		str++;
	}
	_putchar('\n');
}
