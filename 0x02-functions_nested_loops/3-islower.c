#include "main.h"
/**
 * int _islower(int c) -  function that checks for lowercase character
 *
 * Return: 1 if c is lowercase 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
