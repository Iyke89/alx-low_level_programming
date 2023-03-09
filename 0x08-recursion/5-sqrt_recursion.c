#include "main.h"
/**
 * _evaluate - evaluatte funtion sqrt
 * @i: integer
 * @n: integer
 * Return: evaluate sqrt
 */
int_evaluate(int i, int n)
{
/*evaluate function*/
if (n == 0 || n == 1)
return (n);

else if (i * i < n)
return (_evaluate(i + 1, n));

else if (i * i == n) /*condition base*/
return (i);

return (-1);

return (-1);
}
/**
 * *_sqrt_recursion - evaluate sqrt
 * @n: interger
 * Return: sqrt_recursion
 */
int_sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0) /*if n is negative*/
		return (-1);
	else
	{
		return (_evaluate(i, n)); /*recursive call*/
	}
}
