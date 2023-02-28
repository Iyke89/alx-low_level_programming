#include <stdio.h>
/**
 * puts2 - print strings
 * @str:function parameter
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
