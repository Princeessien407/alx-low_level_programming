#include "main.h"
#include <stdio.h>
/**
*_isupper - checks for uppercase character
*@c: the character to be checked
*Return: 1 if c is uppercase, 0 otherwise
*/
int _isupper(int c)
{
	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	return (0);
}
