#include "main.h"
/**
 * _islower(int c) - checks for lowercase character
 *
 * Return: 1 if c is lowercase 0 otherwise
 */
int _islower(char c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
