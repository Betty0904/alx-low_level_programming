#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number
 * @x: find the last digit of a number
 *
 * Return: answer the last digit of a number
 */
int print_last_digit(int x)
{
x %= 10;
if (x < 0)
{
x *= -1;
}
_putchar(x + '0');
return (x);
}
