#include <stdio.h>
#include <unistd.h>
/**
 * main - the main function is to  prints the alphabet in lowercase\n
 *
 * Return: 0 on success
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	putchar(ch);

	putchar('\n');
	return (0);
}
