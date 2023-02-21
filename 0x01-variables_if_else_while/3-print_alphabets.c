#include <stdio.h>
#include <unistd.h>
/**
 * main - print alphatbets in lowercase then uppercase
 *
 * Return: 0 on success
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
